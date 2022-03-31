/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:57:26 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/31 17:55:30 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	*ps;
	
	ps = malloc(sizeof(t_ps));
	ps->t_argc = argc;
	ps->t_argv = argv;
	init_struct(ps);
	init_list(ps);
	if(checker(ps) == 0 && normalize(ps) == 0) 
	{
		sorters(ps);
	}
	finalize_struct(ps);
	return 0;
}

