/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:50:16 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/10 14:53:20 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"

typedef struct s_stack
{
	struct s_stake	*next;
	struct s_stake	*previous;
}			t_stack;

typedef struct s_ps
{
	int		len;
	char	**stack;
	t_stack	*a;
	t_stack *b;
}			t_ps;

int		is_repeated(t_stack	*stack);
void	sa(t_ps *ps);
void	sb(t_ps *ps);
void	push_swap(t_ps *ps);
void	small_sort_two(t_ps *ps);
void	small_sort_three(t_ps *ps);
void	small_sort(t_ps *ps);
void	radix_sort(t_ps *ps);

#endif

