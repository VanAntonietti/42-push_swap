/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_after.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:47:43 by vantonie          #+#    #+#             */
/*   Updated: 2022/04/01 20:41:24 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checker_after(t_ps *ps)
{
	is_repeated(ps);
	if (ps->repeated == TRUE)
	{
		ft_printf("Error\n");
		return (1);
	}
	is_sorted(ps);
	if (ps->sorted == TRUE)
		return (1);
	return (0);
}

void	is_repeated(t_ps *ps)
{
	int	i;
	int	j;

	i = 0;
	while (i < ps->t_argc - 1)
	{
		ps->i_argv[i] = ft_atoi(ps->t_argv[i + 1]);
		i++;
	}
	i = 0;
	while (i < ps->t_argc)
	{
		j = i + 1;
		while (j < ps->t_argc - 1)
		{
			if (ps->i_argv[i] == ps->i_argv[j])
				ps->repeated = TRUE;
			j++;
		}
		i++;
	}
}

void	is_sorted(t_ps *ps)
{
	int		i;
	t_stack	*stack;

	i = 1;
	stack = ps->a;
	ps->sorted = TRUE;
	while (i < ps->t_argc - 1)
	{
		if (stack->n > stack->next->n)
			ps->sorted = FALSE;
		stack = stack->next;
		i++;
	}
	stack = stack->next;
}
