/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:13:14 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/14 19:06:49 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_struct(t_ps *ps)
{
	
}

void	populate_struct(t_ps *ps, t_stack *tmp)
{
	t_stack *tmp_next;
	int	i;
	
	i = 2;
	while (ps->t_argv[i] != NULL)
	{
		tmp_next = malloc(sizeof(node_t));
		tmp_next->data = my_atoi(av[i]);
		tmp_next->next = ps->a;
		tmp->next = tmp_next;
		tmp-> = tmp;
		node = node->next;
		node->prev = node_last;
		i++
	}
}

void	init_struct(t_ps *ps)
{
	t_stack		tmp;
	
	tmp = malloc(sizeof(t_stack));
	node->a->n = ft_atoi(t_argv[1]);
	node->prev = tmp;
	node->next = tmp;
	populate_struct(ps, &tmp);
	
	
}
