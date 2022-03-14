/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:50:16 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/14 19:07:38 by vantonie         ###   ########.fr       */
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

typedef struct s_ps
{
	int		size;
	int		t_argc;
	char	**t_argv;
	t_stack	*a;
	t_stack *b;
}			t_ps;

// int		is_repeated(t_stack	*stack);
// void	sa(t_ps *ps);
// void	sb(t_ps *ps);
// void	push_swap(t_ps *ps);
void	init_struct(t_ps *ps);
void	free_struct(t_ps *ps);

#endif

