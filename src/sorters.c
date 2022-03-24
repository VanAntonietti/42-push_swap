/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:13:43 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/24 17:48:21 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	positive_radix(t_ps *ps)
{
	int	i;
	int	j;
	
	i = 1;
	while (i <= ps->t_argc - 1)
	{
		if ((ps->a->n >> ps->sort->y) & 1)
		{
			move_pb(ps);
			move_rb(ps);
			ps->sort->y++;
		}
		else 
		{
			move_ra(ps);
		}
		i++;
	}
	if (ps->b != NULL)
	{
		j = 0;
		while (j < ps->sort->y) 
		{
			move_pa(ps);
			move_ra(ps);
			j++;
		}
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
	ps->sort->x = 0;
	while(ps->sort->x < 31)
	{
		ps->sort->y = 0;
		positive_radix(ps);
		ps->sort->x++;
	}
	ps->sort->y = 0;
	// negative_radix(ps);
}
