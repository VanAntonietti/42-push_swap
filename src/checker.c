/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:19:26 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/25 15:23:50 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checker(t_ps *ps)
{
	is_overflow(ps);
	if(ps->overflow == TRUE)
	{
		ft_printf("Error\nThe number is too big, please, use a number smaller then the max 32 bits integer.\n");
	}
	is_letter(ps);
	if(ps->letter == TRUE)
	{
		ft_printf("Error\nThere is a invalid character in the list, please, use only numbers.\n");
	}
	is_repeated(ps);
	if(ps->repeated == TRUE)
	{
		ft_printf("Error\nThere is repeated numbers in the input list, please, remove the repeated numbers.\n");
		return (1);
	}
	is_sorted(ps);
	if(ps->sorted == TRUE)
	{	
		// ft_printf("Error\nThe list is already sorted, please, use a unsorted list.\n");
		return (1);
	}
	return (0);
}

void	is_overflow(t_ps *ps)
{
	int	i;

	i = 1;
	while(i < ps->t_argc)
	{
		if(ft_strtol(ps->t_argv[i]) > INT_MAX || ft_strtol(ps->t_argv[i]) < INT_MIN)
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
	while(i < ps->t_argc)
	{
		if(*ps->t_argv[i] < '0' || *ps->t_argv[i] > '9')
			ps->letter = TRUE;
		i++;
	}
}

void	is_repeated(t_ps *ps)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < ps->t_argc)
	{
		j = i + 1;
		while(j < ps->t_argc)
		{
			if(ps->t_argv[i] == ps->t_argv[j])
				ps->repeated = TRUE;
			j++;
		}
		i++;
	}
}

void	is_sorted(t_ps *ps)
{
	int	i;
	
	i = 1;
	while(i < ps->t_argc - 1)
	{
		if (ps->a->n > ps->a->next->n)
			ps->sorted = FALSE;
		ps->a = ps->a->next;
		i++;
	}
	ps->a = ps->a->next;
}
