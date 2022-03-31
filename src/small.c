/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:36:05 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/31 18:53:26 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_ps *ps)
{
	int	smaller;
	int	bigger;

	smaller = find_smaller(ps);
	bigger = find_bigger(ps);
	if (smaller == 1 && bigger == 2)
		move_sa(ps);
	else if (smaller == 2 && bigger == 0)
	{
		move_sa(ps);
		move_rra(ps);
	}	
	else if (smaller == 1 && bigger == 0)
		move_ra(ps);
	else if (smaller == 0 && bigger == 1)
	{
		move_sa(ps);
		move_ra(ps);
	}
	else if (smaller == 2 && bigger == 1)
		move_rra(ps);
}
