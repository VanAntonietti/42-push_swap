/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:50:16 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/24 22:23:19 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"
#include <stdio.h>

typedef struct s_stack
{
	int				n;
	struct s_stack	*next;
	struct s_stack	*prev;
}			t_stack;

typedef struct s_sort
{
	int max_number;
	int	max_bitshift;
	int	x;
	int	y;
	int	placeholder;
	
}			t_sort;

typedef struct s_ps
{
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
	t_sort	*sort;
}			t_ps;


/*  ||							//\\ HELPERS //\\						||  */
void	init_struct(t_ps *ps);
void	init_list(t_ps *ps);
void	others_nodes(t_ps *ps);
void	finalize_struct(t_ps *ps);
void	delete_stack(t_stack *stack);
void	print_stack(t_stack *stack, int counter);
void	print_binary(int binary);
void	find_binary(t_ps *ps);
int		radix_bit_discover(int n);

/*  ||							//\\ SORTERS //\\						||  */
void	push_swap(t_ps *ps);
void	quick_sort(t_ps *ps);
void	radix_sort(t_ps *ps);


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
