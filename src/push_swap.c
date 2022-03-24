/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:57:26 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/23 21:22:41 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	*ps;

	ps = malloc(sizeof(t_ps));
	if (ps == NULL)
		return (1);
	ps->t_argc = argc;
	ps->t_argv = argv;
	init_struct(ps);
	init_list(ps);
	checker(ps);
	
	// finalize_struct(ps);
	free(ps);
	return 0;
}