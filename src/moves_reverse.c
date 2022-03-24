/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_reverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:17:07 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/24 18:33:30 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_rra(t_ps *ps)
{
	ps->a = ps->a->prev;
	ft_printf("rra\n");
}

void	move_rrb(t_ps *ps)
{
	ps->b = ps->b->prev;
	ft_printf("rrb\n");
}

void	move_rrr(t_ps *ps)
{
	ps->a = ps->a->prev;
	ps->b = ps->b->prev;
	ft_printf("rrr\n");
}