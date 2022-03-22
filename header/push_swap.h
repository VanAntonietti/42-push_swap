/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:50:16 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/22 00:51:05 by vantonie         ###   ########.fr       */
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
	t_stack	*a;
	t_stack	*b;
	t_stack *first;
	t_stack *last;
	t_stack *tmp;
}			t_ps;

// int		is_repeated(t_stack	*stack);
// void	sa(t_ps *ps);
// void	sb(t_ps *ps);
// void	push_swap(t_ps *ps);
void	init_struct(t_ps *ps);
void	finalize_struct(t_ps *ps);
void	others_nodes(t_ps *ps);
void	init_list(t_ps *ps);
void	init_struct(t_ps *ps);
void	print_stack(t_ps *ps, t_stack *stack);
void	add_on_top(t_stack *stack_one, t_stack *stack_two);
void	delete_first_node (t_stack *stack_one, t_stack *stack_two);

#endif

