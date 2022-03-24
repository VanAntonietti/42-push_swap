/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an7onie77i <an7onie77i@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:50:16 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/24 05:17:09 by an7onie77i       ###   ########.fr       */
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
	int		counter_a;
	int		counter_b;
	t_bool	sorted;
	t_bool	repeated;
	t_bool	overflow;
	t_bool	letter;
	t_stack	*a;
	t_stack	*b;
	t_stack *first;
	t_stack *last;
}			t_ps;

void	init_list(t_ps *ps);
void	init_struct(t_ps *ps);
void	others_nodes(t_ps *ps);
void	print_stack(t_stack *stack, int counter);
void	finalize_struct(t_ps *ps);
void	delete_stack(t_stack *stack);

/*  ||							//\\ ERRORS //\\						||  */
int		checker(t_ps *ps);
void	is_overflow(t_ps *ps);
void	is_letter(t_ps *ps);
void	is_repeated(t_ps *ps);
void	is_sorted(t_ps *ps);

/*  ||							//\\ MOVES //\\							||  */
void	move_pa(t_ps *ps);
void	move_pb(t_ps *ps);
void	move_ra(t_ps *ps);
void	move_rb(t_ps *ps);
void	move_rr(t_ps *ps);
void	move_rra(t_ps *ps);
void	move_rrb(t_ps *ps);
void	move_rrr(t_ps *ps);

#endif
