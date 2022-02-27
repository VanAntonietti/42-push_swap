/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:39:55 by vantonie          #+#    #+#             */
/*   Updated: 2022/02/19 16:26:18 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t size)
{
	void	*p;

	p = malloc(nelem * size);
	if (p == 0)
		return (p);
	ft_bzero(p, nelem * size);
	return (p);
}
