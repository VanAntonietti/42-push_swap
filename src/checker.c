/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:19:26 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/31 18:43:41 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checker(t_ps *ps)
{
	is_overflow(ps);
	if (ps->overflow == TRUE)
	{
		ft_printf("Error\n");
	}
	is_letter(ps);
	if (ps->letter == TRUE)
	{
		ft_printf("Error\n");
	}
	is_repeated(ps);
	if (ps->repeated == TRUE)
	{
		ft_printf("Error\n");
		return (1);
	}
	is_sorted(ps);
	if (ps->sorted == TRUE)
	{	
		ft_printf("Error\n");
		return (1);
	}
	return (0);
}

void	is_overflow(t_ps *ps)
{
	int	i;

	i = 1;
	while (i < ps->t_argc)
	{
		if (ft_strtol(ps->t_argv[i]) > INT_MAX
			|| ft_strtol(ps->t_argv[i]) < INT_MIN)
		{	
			printf("%ld\n", ft_strtol(ps->t_argv[i]));
			ps->overflow = TRUE;
		}	
		i++;
	}
}

void	is_letter(t_ps *ps)
{
	int	i;

	i = 1;
	while (i < ps->t_argc)
	{
		if ((*ps->t_argv[i] < '0' && *ps->t_argv[i] > '-')
			|| *ps->t_argv[i] > '9' || *ps->t_argv[i] < '-')
			ps->letter = TRUE;
		i++;
	}
}

void	is_repeated(t_ps *ps)
{
	int	i;
	int	j;

	i = 0;
	while (i < ps->t_argc - 1)
	{
		j = i + 1;
		while (j < ps->t_argc)
		{
			if (ps->t_argv[i] == ps->t_argv[j])
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
