/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:13:14 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/31 16:24:08 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	others_nodes(t_ps *ps)
{
	t_stack *stack_next;
	int		i;

	i = 2;
	while (ps->t_argv[i] != NULL)
	{
		stack_next = malloc(sizeof(t_stack));
		stack_next->n = ft_strtol(ps->t_argv[i]);
		stack_next->next = ps->first;
		ps->a->next = stack_next;
		ps->last = ps->a;
		ps->a = ps->a->next;
		ps->a->prev = ps->last;
		ps->origin[i - 1] = ps->a->n;
		ps->a->edited = FALSE;
		i++;
	}
}

void	init_list(t_ps *ps)
{
	ps->a->n = ft_atoi(ps->t_argv[1]);
	ps->a->prev = ps->a;
	ps->a->next = ps->a;
	ps->first = ps->a;
	ps->origin[0] = ps->a->n;
	ps->a->edited = FALSE;
	others_nodes(ps);
	ps->last = ps->a;
	ps->a = ps->a->next;
	ps->a->prev = ps->last;
}

void	init_struct(t_ps *ps)
{
	ps->a = malloc(sizeof(t_stack));
	if(ps->a == NULL)
		printf("Error");
	ps->b = NULL;
	ps->first = NULL;
	ps->last = NULL;
	ps->sort = malloc(sizeof(t_sort));
	ps->counter_a = ps->t_argc - 1;
	ps->counter_b = 0;
	ps->sorted = FALSE;
	ps->repeated = FALSE;
	ps->overflow = FALSE;
	ps->letter = FALSE;
	ps->sort->max_number = 0;
	ps->origin = (malloc(ps->t_argc - 1*(sizeof(int))));
}

void	finalize_struct(t_ps *ps)
{
	free(ps->a);
	free(ps->b);
	free(ps->first);
	free(ps->last);
}
