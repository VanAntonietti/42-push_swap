/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_before.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:19:26 by vantonie          #+#    #+#             */
/*   Updated: 2022/04/01 20:07:23 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checker_before(t_ps *ps)
{
	is_overflow(ps);
	if (ps->overflow == TRUE)
	{
		ft_printf("Error\n");
		return (1);
	}
	is_letter(ps);
	if (ps->letter == TRUE)
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
