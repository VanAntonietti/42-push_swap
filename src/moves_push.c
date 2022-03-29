/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:17:08 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/25 21:31:23 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	empty_ps(t_ps *ps, t_stack *tmp)
{
	if (tmp == ps->a)
	{
		ps->a = NULL;
		ps->b->prev->next = tmp;
		tmp->prev = ps->b->prev;
		ps->b->prev = tmp;
		tmp->next = ps->b;
		ps->b = tmp;
	}
	else
	{
		ps->b = NULL;
		ps->a->prev->next = tmp;
		tmp->prev = ps->a->prev;
		ps->a->prev = tmp;
		tmp->next = ps->a;
		ps->a = tmp;
	}
}

void	move_pa(t_ps *ps, t_stack *tmp)
{
	ps->counter_a++;
	ps->counter_b--;
	ft_printf("pa\n");
	if (ps->b == ps->b->next)
		return (empty_ps(ps, tmp));
	ps->b->next->prev = ps->b->prev;
	ps->b->prev->next = ps->b->next;
	ps->b = ps->b->next;
	if (ps->a == NULL)
	{
		ps->a = tmp;
		tmp->next = ps->a;
		tmp->prev = ps->a;
	}
	else
	{
		ps->a->prev->next = tmp;
		tmp->prev = ps->a->prev;
		ps->a->prev = tmp;
		tmp->next = ps->a;
		ps->a = tmp;
	}
}

void	move_pb(t_ps *ps, t_stack *tmp)
{
	ps->counter_a--;
	ps->counter_b++;
	ft_printf("pb\n");
	if (ps->a == ps->a->next)
		return (empty_ps(ps, tmp));
	ps->a->next->prev = ps->a->prev;
	ps->a->prev->next = ps->a->next;
	ps->a = ps->a->next;
	if (ps->b == NULL)
	{
		ps->b = tmp;
		tmp->next = ps->b;
		tmp->prev = ps->b;
	}
	else
	{
		ps->b->prev->next = tmp;
		tmp->prev = ps->b->prev;
		ps->b->prev = tmp;
		tmp->next = ps->b;
		ps->b = tmp;
	}
}
