/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:31:29 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/31 17:14:20 by vantonie         ###   ########.fr       */
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

unsigned int count_bits(int n)
{
	unsigned int i;
	i = 0;
	while(n < -1 || n > 0)
	{
		i++;
		n >>= 1;
	}
	return(i);
}

int	find_position(t_ps *ps, int n, t_stack *stack)
{
	int		i;
	
	i = 0;
	while(i < ps->counter_a)
	{
		if(stack->n == n && stack->edited == FALSE)
		{
			stack->edited = TRUE;
			return(i);
		}
		i++;
		stack = stack->next;
	}
	return(-1);
}

int normalize(t_ps *ps)
{
	int		i;
	t_stack *tmp;
	int		position;
	
	i = 0;
	quickSort(ps->origin, 0, ps->counter_a - 1);
	while(i < ps->counter_a)
	{
		tmp = ps->a;
		position = find_position(ps,ps->origin[i], tmp);
		if(position == -1)
		{
			return(-1);
		}
		while(position > 0)
		{
			tmp = tmp->next;
			position--;
		}
		tmp->n = i;
		i++;
	}
	return(0);
}
