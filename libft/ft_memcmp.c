/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:47:32 by vantonie          #+#    #+#             */
/*   Updated: 2021/09/17 01:32:06 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str, const void *dst, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((((unsigned char *)str)[i]) != ((unsigned char *)dst)[i])
		{
			return (((unsigned char *)str)[i] - ((unsigned char *)dst)[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
