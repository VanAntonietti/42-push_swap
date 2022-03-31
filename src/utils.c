/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:31:29 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/31 18:53:32 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_position(t_ps *ps, int n, t_stack *stack)
{
	int		i;

	i = 0;
	while (i < ps->counter_a)
	{
		if (stack->n == n && stack->edited == FALSE)
		{
			stack->edited = TRUE;
			return (i);
		}
		i++;
		stack = stack->next;
	}
	return (-1);
}

int	normalize(t_ps *ps)
{
	int		i;
	int		position;
	t_stack	*tmp;

	i = 0;
	quick_sort(ps->origin, 0, ps->counter_a - 1);
	while (i < ps->counter_a)
	{
		tmp = ps->a;
		position = find_position(ps, ps->origin[i], tmp);
		if (position == -1)
		{
			return (-1);
		}
		while (position > 0)
		{
			tmp = tmp->next;
			position--;
		}
		tmp->n = i;
		i++;
	}
	return (0);
}

int	find_bigger(t_ps *ps)
{
	int	i;
	int	max;
	int	position;

	i = 0;
	position = 0;
	max = ps->a->n;
	while (i < ps->counter_a)
	{
		if (max < ps->a->n)
		{
			position = i;
			max = ps->a->n;
		}	
		ps->a = ps->a->next;
		i++;
	}
	return (position);
}

int	find_smaller(t_ps *ps)
{
	int	i;
	int	min;
	int	position;

	i = 0;
	position = 0;
	min = ps->a->n;
	while (i < ps->counter_a)
	{
		if (min > ps->a->n)
		{
			position = i;
			min = ps->a->n;
		}	
		ps->a = ps->a->next;
		i++;
	}
	return (position);
}
