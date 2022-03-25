/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:13:43 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/25 19:46:10 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	positive_radix(t_ps *ps)
{
	int i;
	int	j;
	
	i = 0;
	while(i < ps->sort->max_bitshift)
	{
		j = 0;
		while(j < ps->t_argc - 1)
		{
			if(( ps->a->n >> i & 1) == 1)
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
}

// static void	negative_radix(t_ps *ps)
// {
// 	printf("você não deveria estar vendo isso");
// 	ps->sort->placeholder = 1;
// }

void	quick_sort(t_ps *ps)
{
	printf("você não deveria estar vendo isso quick");
	ps->sort->placeholder = 1;
}

void	radix_sort(t_ps *ps)
{
	find_binary(ps);
	positive_radix(ps);
}
