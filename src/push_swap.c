/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:57:26 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/24 21:20:15 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_ps *ps)
{
	if(ps->t_argc == 0)
	{
		ft_printf("To few arguments, please, provide a list to be sorted.\n");
	}
	if(ps->t_argc < 10 && ps->t_argv > 0)
	{
		quick_sort(ps);
	}
	if(ps->t_argc > 10)
	{
		radix_sort(ps);
	}
}

int	main(int argc, char **argv)
{
	t_ps	*ps;
	
	// int		i;
	// int		j;
	// int		k;
	// int		l;
	// int		m;
	// int		n;
	
	// i = 42;
	// j = i >> 1;
	// k = i >> 2;
	// l = i >> 3;
	// m = i >> 4;
	// n = i >> 5;
	
	// print_binary(i);
	// printf("\n");
	// print_binary(j);
	// printf("\n");
	// print_binary(k);
	// printf("\n");
	// print_binary(l);
	// printf("\n");
	// print_binary(m);
	// printf("\n");
	// print_binary(n);
	// printf("\n");
	ps = malloc(sizeof(t_ps));
	ps->t_argc = argc;
	ps->t_argv = argv;
	init_struct(ps);
	init_list(ps);
	if(checker(ps) == 0)
	{
		push_swap(ps);
	}	
	// finalize_struct(ps);
	free(ps);
	return 0;
}
