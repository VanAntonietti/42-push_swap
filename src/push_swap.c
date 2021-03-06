/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:13:43 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/31 18:39:14 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_ps *ps)
{
	if (ps->t_argc - 1 <= 3)
		small_sort(ps);
	else if (ps->t_argc - 1 <= 30)
		medium_sort(ps);
	else if (ps->t_argc -1 > 30)
		radix_sort(ps);
}
