/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:50:16 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/16 17:18:35 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"
#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node_t;

typedef struct s_stack
{
	int				n;
	struct s_stack	*next;
	struct s_stack	*prev;
}			t_stack;

typedef struct s_ps
{
	int		size;
	int		t_argc;
	char	**t_argv;
	node_t	*a;
	node_t	*b;
}			t_ps;

// int		is_repeated(t_stack	*stack);
// void	sa(t_ps *ps);
// void	sb(t_ps *ps);
// void	push_swap(t_ps *ps);
void	init_struct(t_ps *ps);
void	finalize_struct(t_ps *ps);
void	init_list(t_ps *ps);
void	init_list(t_ps *ps);
void	link_list(t_ps *ps, t_stack *first, t_stack *last);
void	print_stack(node_t *stack, t_ps *ps);
struct node *set_linked_list(char **av);
void others_nodes(char **av, node_t *node_first, node_t *node_last, node_t *node);
#endif

