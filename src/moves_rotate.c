/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:17:10 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/24 18:33:43 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_ra(t_ps *ps)
{
	ps->a = ps->a->next;
	ft_printf("ra\n");
}

void	move_rb(t_ps *ps)
{
	ps->b = ps->b->next;
	ft_printf("rb\n");
}

void	move_rr(t_ps *ps)
{
	ps->a = ps->a->next;
	ps->b = ps->b->next;
	ft_printf("rr\n");
	
}