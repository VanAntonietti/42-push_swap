/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an7onie77i <an7onie77i@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:57:26 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/24 05:15:26 by an7onie77i       ###   ########.fr       */
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