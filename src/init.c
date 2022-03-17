/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:13:14 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/16 17:34:23 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(node_t *stack, t_ps *ps)
{
	int	i;

	i = 1;
	while (i <= (ps->t_argc - 1))
	{
		ft_printf("%d: %d\n", i, stack->data);
		stack = stack->next;
		i++;
	}
}

void others_nodes(char **av, node_t *node_first, node_t *node_last, node_t *node)
{
	node_t *node_next;

    for (int i = 2; av[i] != NULL; i++) 
	{
        node_next = malloc(sizeof(node_t));
        node_next->data = atoi(av[i]);
        node_next->next = node_first;
        node->next = node_next;
        node_last = node;
        node = node->next;
        node->prev = node_last;
	}
}	


struct node *set_linked_list(char **av)
{
    node_t *node_first;
    node_t *node = malloc(sizeof(node_t));
    node_t *node_last = malloc(sizeof(node_t));

	
    if (!node)
        return NULL;
    node->data = atoi(av[1]);
    node->prev = node;
    node->next = node;
    node_first = node;
    others_nodes(av, node_first, node_last, node);
    node_last = node;
    node = node->next;
    node->prev = node_last;
	node = node->prev;
    return (node);
}

// void	print_stack(t_ps *ps)
// {	
// 	int	i;

// 	i = 1;
// 	while (i <= (ps->t_argc - 1))
// 	{
// 		ft_printf("%d: %d\n", i, ps->a->n);
// 		ps->a = ps->a->next;
// 		i++;
// 	}
// }

// void	link_list(t_ps *ps, t_stack *first, t_stack *last)
// {
// 	int	i;
// 	t_stack	*tmp_next;

// 	i = 2;
// 	while (i <= (ps->t_argc - 1))
// 	{
// 		tmp_next = malloc(sizeof(t_stack));
// 		tmp_next->n = ft_atoi(ps->t_argv[i]);
// 		tmp_next->next = first;
// 		tmp_next->next = tmp_next;
// 		last = ps->a;
// 		ps->a = ps->a->next;
// 		ps->a->prev = last;
// 		i++;
// 	}
// }

// void	init_list(t_ps *ps)
// {
// 	t_stack	*first;
// 	t_stack	*last;

// 	last = malloc(sizeof(t_stack));
// 	first = malloc(sizeof(t_stack));
// 	ps->a->n = ft_atoi(ps->t_argv[1]);
// 	ps->a->prev = ps->a;
// 	ps->a->next = ps->a;
// 	first = ps->a;
// 	link_list(ps, first, last);
// 	last = ps->a;
// 	ps->a = ps->a->next;
// 	ps->a->prev = last;
	
// 	print_stack(ps);
// 	ft_free_ptr((void **)first);
// 	ft_free_ptr((void **)last);
// }

// void	init_struct(t_ps *ps)	
// {
// 	ps->a = malloc(sizeof(t_stack));
// 	ps->b = malloc(sizeof(t_stack));
// 	init_list(ps);
// }

// void	finalize_struct(t_ps *ps)
// {
// 	ft_free_ptr((void **)ps->a);
// 	ft_free_ptr((void **)ps->b);
// }