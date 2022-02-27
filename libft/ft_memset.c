/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:47:58 by vantonie          #+#    #+#             */
/*   Updated: 2021/09/17 01:32:06 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst;

	dst = (unsigned char *)str;
	i = 0;
	while (0 < n)
	{
		dst[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (dst);
}
