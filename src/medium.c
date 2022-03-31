/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:35:15 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/31 18:37:33 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	medium_sort(t_ps *ps)
{
	while (ps->counter_a > 3)
	{	
		if (find_smaller(ps) == 0)
			move_pb(ps, ps->a);
		else if (find_smaller(ps) < ps->counter_a / 2)
			move_ra(ps);
		else
			move_rra(ps);
	}
	small_sort(ps);
	while (ps->counter_b != 0)
	{
		move_pa(ps, ps->b);
	}
}
