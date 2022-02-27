/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:48:31 by vantonie          #+#    #+#             */
/*   Updated: 2021/09/17 01:32:06 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *ptr, size_t n)
{
	size_t	ptrlen;

	ptrlen = ft_strlen(ptr);
	if (ptrlen == 0)
	{
		return ((char *)str);
	}
	while (*str && ptrlen <= n)
	{
		if (ft_strncmp(str, ptr, ptrlen) == 0)
			return ((char *)str);
		str++;
		n--;
	}
	return (NULL);
}
