/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:50:16 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/31 18:53:57 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>

typedef struct s_stack
{
	int				n;
	struct s_stack	*next;
	struct s_stack	*prev;
	t_bool			edited;
}			t_stack;

typedef struct s_ps
{
	int		*origin;
	int		t_argc;
	int		counter_a;
	int		counter_b;
	char	**t_argv;
	t_bool	sorted;
	t_bool	repeated;
	t_bool	overflow;
	t_bool	letter;
	t_stack	*a;
	t_stack	*b;
	t_stack	*first;
	t_stack	*last;
}			t_ps;

/*  ||						//\\ MAIN FUNCTIONS //\\					||  */
void	init_struct(t_ps *ps);
void	init_list(t_ps *ps);
void	finalize_struct(t_ps *ps);

/*  ||							//\\ HELPERS //\\						||  */
void	quick_sort(int arr[], int low, int high);
int		find_position(t_ps *ps, int n, t_stack *stack);
int		normalize(t_ps *ps);
int		find_smaller(t_ps *ps);
int		find_bigger(t_ps *ps);

/*  ||							//\\ SORTERS //\\						||  */
void	push_swap(t_ps *ps);
void	small_sort(t_ps *ps);
void	medium_sort(t_ps *ps);
void	radix_sort(t_ps *ps);
void	push_swap(t_ps *ps);

/*  ||							//\\ ERRORS //\\						||  */
int		checker(t_ps *ps);
void	is_overflow(t_ps *ps);
void	is_letter(t_ps *ps);
void	is_repeated(t_ps *ps);
void	is_sorted(t_ps *ps);

/*  ||							//\\ MOVES //\\							||  */
void	move_pa(t_ps *ps, t_stack *tmp);
void	move_pb(t_ps *ps, t_stack *tmp);
void	move_ra(t_ps *ps);
void	move_rb(t_ps *ps);
void	move_rr(t_ps *ps);
void	move_rra(t_ps *ps);
void	move_rrb(t_ps *ps);
void	move_rrr(t_ps *ps);
void	move_sa(t_ps *ps);
void	move_sb(t_ps *ps);
void	move_ss(t_ps *ps);

#endif
