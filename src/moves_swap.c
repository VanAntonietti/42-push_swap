/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:17:11 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/25 20:05:28 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_sa(t_ps *ps)
{
	t_stack		*tmp;

	tmp = ps->a->next->next;
	tmp->prev = ps->a;
	ps->a->prev->next = ps->a->next;
	ps->a->next->prev = ps->a->prev;
	tmp = ps->a->next;
	ps->a->next = tmp->next;
	tmp->next = ps->a;
	ps->a->prev = tmp;
	ps->a = tmp;
	ft_printf("sa\n");
}

void	move_sb(t_ps *ps)
{
	t_stack	*tmp;

	ps->b->prev->next = ps->b->next;
	ps->b->next->prev = ps->b->prev;
	tmp = ps->b->next->next;
	ps->b->next->next = ps->b;
	ps->b->prev = ps->b->next;
	ps->b = ps->b->next;
	ps->b->next->next = tmp;
	ft_printf("sb\n");
}

void	move_ss(t_ps *ps)
{
	t_stack	*tmp;

	ps->a->prev->next = ps->a->next;
	ps->a->next->prev = ps->a->prev;
	tmp = ps->a->next->next;
	ps->a->next->next = ps->a;
	ps->a->prev = ps->a->next;
	ps->a = ps->a->next;
	ps->a->next->next = tmp;
	ps->b->prev->next = ps->b->next;
	ps->b->next->prev = ps->b->prev;
	tmp = ps->b->next->next;
	ps->b->next->next = ps->b;
	ps->b->prev = ps->b->next;
	ps->b = ps->b->next;
	ps->b->next->next = tmp;
	ft_printf("ss\n");
}