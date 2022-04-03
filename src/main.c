/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:57:26 by vantonie          #+#    #+#             */
/*   Updated: 2022/04/03 20:32:40 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	*ps;

	if (argc > 1)
	{
		ps = malloc(sizeof(t_ps));
		ps->t_argc = argc;
		ps->t_argv = argv;
		init_struct(ps);
		init_list(ps);
		if (checker_before(ps) == 0)
		{
			if (checker_after(ps) == 0 && normalize(ps) == 0)
			{
				push_swap(ps);
			}
		}
		finalize_struct(ps);
		free(ps);
	}
	return (0);
}
