/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:48:12 by vantonie          #+#    #+#             */
/*   Updated: 2021/09/17 01:32:06 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	a;

	a = 0;
	while (dst[a] && a < n)
	{
		a++;
	}
	i = a;
	while (src[a - i] && (a + 1) < n)
	{
		dst[a] = src[a - i];
		a++;
	}
	if (i < n)
	{
		dst[a] = '\0';
	}
	return (i + ft_strlen(src));
}
