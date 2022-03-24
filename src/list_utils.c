/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:31:29 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/23 20:39:57 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_stack(t_stack *stack)
{
	if (stack == stack->next)
		stack = NULL;
	else
	{
		stack->prev->next = stack->next;
		stack->next->prev = stack->prev;
		stack = stack->next;
	}	
}

void	print_stack(t_stack *stack, int counter)
{
	int	i;

	i = 1;
	while (i <= counter)
	{
		ft_printf("%d: %d\n", i, stack->n);
		stack = stack->next;
		i++;
	}
}