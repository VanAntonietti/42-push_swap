/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:13:43 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/31 15:47:23 by vantonie         ###   ########.fr       */
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



static int find_smaller(t_ps *ps)
{
	int	i;
	int min;
	int position;

	i = 0;
	position = 0;
	min = ps->a->n;
	while(i < ps->counter_a)
	{
		if(min > ps->a->n)
		{
			position = i;
			min = ps->a->n;
		}	
		ps->a = ps->a->next;	
		i++;
	}
	return(position);
}

static int find_greater(t_ps *ps)
{
	int	i;
	int max;
	int position;

	i = 0;
	position = 0;
	max = ps->a->n;
	while(i < ps->counter_a)
	{
		if(max < ps->a->n)
		{
			position = i;
			max = ps->a->n;
		}	
		ps->a = ps->a->next;	
		i++;
	}
	return(position);
}

void	small_sort(t_ps *ps)
{
	int	smaller;
	int	greater;

	smaller = find_smaller(ps);
	greater = find_greater(ps);
	if(smaller == 1 && greater == 2)
		move_sa(ps);
	else if(smaller == 2 && greater == 0)
	{
		move_sa(ps);
		move_rra(ps);
	}	
	else if(smaller == 1 && greater == 0)
		move_ra(ps);
	else if(smaller == 0 && greater == 1)
	{
		move_sa(ps);
		move_ra(ps);
	}	
	else if(smaller == 2 && greater == 1)
		move_rra(ps);
}

void	medium_sort(t_ps *ps)
{
	while(ps->counter_a > 3)
	{	
		if(find_smaller(ps) == 0)
			move_pb(ps, ps->a);
		else if(find_smaller(ps) < ps->counter_a / 2)
			move_ra(ps);
		else
			move_rra(ps);
	}
	small_sort(ps);
	while(ps->counter_b != 0)
	{
		move_pa(ps, ps->b);
	}
	
}

void	sorters(t_ps *ps)
{
	if(ps->t_argc - 1 <= 3)
		small_sort(ps);
	else if(ps->t_argc - 1 < 15)
		medium_sort(ps);
	else if(ps->t_argc -1 >= 15)
		radix_sort(ps);
}