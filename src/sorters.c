/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:13:43 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/29 19:11:52 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_ps *ps)
{
	
	int i;
	int	j;
	
	i = 0;
	find_binary(ps);
	while(i < (ps->sort->max_bitshift + 1))
	{
		is_sorted(ps);
		if(ps->sorted == TRUE)
			break;
		j = 0;
		while(j < ps->t_argc - 1)
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
	}
	if(ps->sorted == FALSE)
	{
		while(ps->sorted == FALSE)
		{
			move_ra(ps);
			is_sorted(ps);
		}
	}	
}


void	quick_sort(t_ps *ps)
{
	printf("você não deveria estar vendo isso quick");
	ps->sort->placeholder = 1;
}
