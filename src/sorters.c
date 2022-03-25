/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:13:43 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/24 23:07:35 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	positive_radix(t_ps *ps)
{
	int i;
	int	j;
	// ps->sort->max_bitshift = ps->sort->max_bitshift +;
	i = 0;
	while(i <= ps->sort->max_bitshift)
	{
		j = 0;
		while(j < ps->t_argc)
		{
			
			// printf("%d -> %d\n", ps->a->n, ps->a->n >> i & 1);
			if( ps->a->n >> (ps->sort->max_bitshift - i)& 1)
				move_ra(ps);
			else
			{
				move_pb(ps);
			}
			j++;
		}
		while(ps->counter_b > 0)
		{
			move_pa(ps);
			move_ra(ps);
		}
		i++;
		// printf("%d\n", ps->sort->max_bitshift);
	}
	
}
int	radix_bit_discover(int n)
{	
	int	i;
	
	i = 0;
	while(n >> i != 0)
	{
		i++;
	}
	return(i);
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
