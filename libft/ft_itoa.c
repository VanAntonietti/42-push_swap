/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:28:46 by vantonie          #+#    #+#             */
/*   Updated: 2021/11/15 17:38:17 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_size(long int n)
{
	if (n < 0)
		return (1 + ft_count_size(-n));
	if (n <= 9)
		return (1);
	else
		return (1 + ft_count_size(n / 10));
}

static void	ft_fill(char *new, int n, int size)
{
	if (n < 0)
	{
		new[0] = '-';
		n *= -1;
	}
	if (n > 9)
		ft_fill(new, n / 10, size - 1);
	new[size] = (n % 10) + 48;
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*int_str;
	int		flag;

	flag = 0;
	if (n <= INT_MIN)
	{
		n = -INT_MAX;
		flag = 1;
	}
	size = ft_count_size(n);
	int_str = malloc(size + 1 * sizeof(char));
	int_str[size] = 0;
	if (!int_str)
		return (NULL);
	ft_fill(int_str, n, --size);
	if (flag == 1)
		int_str[size] += flag;
	return (int_str);
}
