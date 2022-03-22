/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:13:14 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/21 23:27:44 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	others_nodes(t_ps *ps)
{
	t_stack *stack_next;
	int		i;

	i = 2;
	while (ps->t_argv[i] != NULL)
	{
		stack_next = malloc(sizeof(node_t));
		stack_next->n = atoi(ps->t_argv[i]);
		stack_next->next = ps->first;
		ps->a->next = stack_next;
		ps->last = ps->a;
		ps->a = ps->a->next;
		ps->a->prev = ps->last;
		i++;
	}
}

void	init_list(t_ps *ps)
{
	ps->a->n = ft_atoi(ps->t_argv[1]);
	ps->a->prev = ps->a;
	ps->a->next = ps->a;
	ps->first = ps->a;
	others_nodes(ps);
	ps->last = ps->a;
	ps->a = ps->a->next;
	ps->a->prev = ps->last;
}

void	init_struct(t_ps *ps)
{
	ps->a = malloc(sizeof(t_stack));
	ps->b = malloc(sizeof(t_stack));
	ps->first = malloc(sizeof(t_stack));
	ps->last = malloc(sizeof(t_stack));
	ps->tmp = malloc(sizeof(t_stack));
}

void	finalize_struct(t_ps *ps)
{
	free(ps->a);
	free(ps->b);
	free(ps->first);
	free(ps->last);
	free(ps->tmp);
	// ft_free_ptr((void **)ps->b);
}