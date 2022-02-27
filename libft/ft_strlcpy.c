/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:48:16 by vantonie          #+#    #+#             */
/*   Updated: 2021/09/17 01:32:06 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < n)
	{
		ft_memcpy(dst, src, srclen + 1);
	}
	else if (n != 0)
	{
		ft_memcpy(dst, src, n - 1);
		dst[n - 1] = '\0';
	}
	return (srclen);
}
