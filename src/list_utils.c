/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:31:29 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/24 21:05:43 by vantonie         ###   ########.fr       */
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
void	print_binary(int binary)
{
	printf("%d in binary is " BYTE_TO_BINARY_PATTERN, binary,
			BYTE_TO_BINARY(binary));
}

void	find_binary(t_ps *ps)
{
	int	i;
	
	i = 0;
	while(i < ps->t_argc - 1)
	{
		if(ps->a->n > ps->sort->max_number)
			ps->sort->max_number = ps->a->n;
		ps->a = ps->a->next;
		i++;
	}
	while(ps->sort->max_number >> ps->sort->max_bitshift != 0)
	{
		ps->sort->max_bitshift++;
	}
	
}