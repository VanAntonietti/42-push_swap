/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dinit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:16:12 by vantonie          #+#    #+#             */
/*   Updated: 2022/04/02 20:29:18 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	finalize_struct(t_ps *ps)
{
	t_stack	*tmp;

	while (ps->counter_a > 0)
	{
		tmp = ps->a->next;
		free((void *)ps->a);
		ps->a = tmp;
		ps->counter_a--;
	}
	free(ps->origin);
	free(ps->i_argv);
}
