/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:17:08 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/25 20:09:48 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	empty_stack(t_ps *stack, t_stack *tmp)
{
	if (tmp == stack->a)
	{
		stack->a = NULL;
		stack->b->prev->next = tmp;
		tmp->prev = stack->b->prev;
		stack->b->prev = tmp;
		tmp->next = stack->b;
		stack->b = tmp;
	}
	else
	{
		stack->b = NULL;
		stack->a->prev->next = tmp;
		tmp->prev = stack->a->prev;
		stack->a->prev = tmp;
		tmp->next = stack->a;
		stack->a = tmp;
	}
}

void	move_pa(t_ps *ps, t_stack *tmp)
{
	ps->counter_a += 1;
	ps->counter_b -= 1;
	if (ps->b == ps->b->next)
		return (empty_stack(ps, tmp));
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
	ft_printf("pa\n");
}

void	move_pb(t_ps *ps, t_stack *tmp)
{
	ps->counter_a -= 1;
	ps->counter_b += 1;
	if (ps->a == ps->a->next)
		return (empty_stack(ps, tmp));
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
	ft_printf("pb\n");
}
