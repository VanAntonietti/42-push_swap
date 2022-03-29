/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:57:26 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/29 17:47:50 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_ps *ps)
{
	// if(ps->t_argc == 0)
	// {
	// 	ft_printf("To few arguments, please, provide a list to be sorted.\n");
	// }
	// if(ps->t_argc < 10 && ps->t_argv > 0)
	// {
	// 	quick_sort(ps);
	// }
	// if(ps->t_argc > 10)
	// {
	radix_sort(ps);

}

int	main(int argc, char **argv)
{
	t_ps	*ps;
	
	ps = malloc(sizeof(t_ps));
	ps->t_argc = argc;
	ps->t_argv = argv;
	init_struct(ps);
	init_list(ps);
	if(checker(ps) == 0)
	{
		radix_sort(ps);
	}
	// finalize_struct(ps);
	free(ps);
	return 0;
}