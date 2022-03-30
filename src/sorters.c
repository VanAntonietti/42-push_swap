/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:13:43 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/30 18:09:18 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_ps *ps)
{
	
	int i;
	int	j;
	
	i = 0;
	while(ps->sorted == FALSE)
	{
		j = 0;
		while(j < ps->t_argc - 1 && ps->sorted == FALSE)
		{
			if((ps->a->n >> i & 1) == 1)
				move_ra(ps);
			else
			{
				move_pb(ps, ps->a);
			}
			j++;
		}
		while(ps->counter_b > 0)
		{
			move_pa(ps, ps->b);
		}
		i++;
		is_sorted(ps);
	}
}


void	small_sort(t_ps *ps)
{
	if(ps->a->n == 1 && ps->a->next->n == 0)
		move_sa(ps);
	else if(ps->a->n == 2 && ps->a->next->n == 1)
	{
		move_sa(ps);
		move_rra(ps);
	}	
	else if(ps->a->n == 2 && ps->a->next->n == 0)
		move_ra(ps);
	else if(ps->a->n == 0 && ps->a->next->n == 2)
	{
		move_sa(ps);
		move_ra(ps);
	}	
	else if(ps->a->n == 1 && ps->a->next->n == 2)
		move_rra(ps);
}

static int find_smaller(t_ps *ps)
{
	int	i;
	int min;

	i = 0;
	min = ps->a->n;
	while(i < ps->counter_a)
	{
		if(min > ps->a->n)
			min = ps->a->n;
		ps->a = ps->a->next;	
		i++;
	}
	return(min);
}

void	medium_sort(t_ps *ps)
{
	int min;

	while(ps->counter_a > 3)
	{
		min = ps->a->n;
		if(min == find_smaller(ps))
			move_pb(ps, ps->a);
		else
			move_ra(ps);
	}
	small_sort(ps);
	while(ps->counter_b != 0)
	{
		move_pa(ps, ps->b);
		ps->counter_b--;
	}
	
}
// 5 -> procurar menor número pb pb sort pa pa
void	sorters(t_ps *ps)
{
	if(ps->t_argc - 1 <= 3)
		small_sort(ps);
	else if(ps->t_argc - 1 >= 3 || ps->t_argc - 1 <= 10)
		medium_sort(ps);
	else if(ps->t_argc -1 > 10)
		radix_sort(ps);
}
