/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:57:26 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/22 00:19:09 by vantonie         ###   ########.fr       */
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
	
	print_stack(ps, ps->a);
	
	add_on_top(ps->a, ps->b);
	// delete_first_node(ps->a, ps->b);

	print_stack(ps, ps->b);
	
	print_stack(ps, ps->a);
	// finalize_struct(ps);
	free(ps);
	return 0;
}