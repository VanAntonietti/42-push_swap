/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:31:14 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/31 18:38:57 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_ps *ps)
{
	int	i;
	int	j;

	i = 0;
	while (ps->sorted == FALSE)
	{
		j = 0;
		while (j < ps->t_argc - 1 && ps->sorted == FALSE)
		{
			if ((ps->a->n >> i & 1) == 1)
				move_ra(ps);
			else
			{
				move_pb(ps, ps->a);
			}
			j++;
		}
		while (ps->counter_b > 0)
		{
			move_pa(ps, ps->b);
		}
		i++;
		is_sorted(ps);
	}
}
