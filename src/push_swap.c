/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:57:26 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/10 13:22:36 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(t_ps *ps)
{
	if(ps->len == 2)
	{
		small_sort_two(&ps);
	}
	else if(ps->len == 3)
	{
		small_sort_three(&ps);
	}
	else if(ps->len > 3 && ps->len < 5)
	{
		small_sort(&ps);
	}
	else if(ps->len > 5) 
	{
		radix_sort(&ps);
	}
}

int	main(int argc, char **argv)
{
	t_ps	*ps;
	
	argc = ps->len;
	argv = ps->stack;
	ps->a->next = malloc(sizeof(t_stack) * ps->len - 1);
	ps->b->next = malloc(sizeof(t_stack) * ps->len - 1);
	push_swap(&ps);
	return 0;
}