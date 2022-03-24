/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:17:08 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/24 18:33:16 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_pa(t_ps *ps)
{
	t_stack	*tmp_local;

	ps->counter_a++;
	ps->counter_b--;
	
	tmp_local = ps->b;
	tmp_local->next->prev = ps->b->prev;
	tmp_local->prev->next = ps->b->next;
	ps->b = ps->b->next;
	if(ps->a == NULL)
	{
		ps->a = tmp_local;
		tmp_local->next = tmp_local;
		tmp_local->prev = tmp_local;
	}
	else
	{
		ps->a->prev->next = tmp_local;
		tmp_local->prev = ps->a->prev;
		ps->b->prev = tmp_local;
		tmp_local->next = ps->a;
		ps->a = tmp_local;
	}
	ft_printf("pa\n");
}

void	move_pb(t_ps *ps)
{
	t_stack	*tmp_local;

	ps->counter_a--;
	ps->counter_b++;
	
	tmp_local = ps->a;
	tmp_local->next->prev = ps->a->prev;
	tmp_local->prev->next = ps->a->next;
	ps->a = ps->a->next;
	if(ps->b == NULL)
	{
		ps->b = tmp_local;
		tmp_local->next = tmp_local;
		tmp_local->prev = tmp_local;
	}
	else
	{
		ps->b->prev->next = tmp_local;
		tmp_local->prev = ps->b->prev;
		ps->b->prev = tmp_local;
		tmp_local->next = ps->b;
		ps->b = tmp_local;
	}
	ft_printf("pb\n");
}
