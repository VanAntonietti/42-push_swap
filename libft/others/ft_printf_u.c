/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:54:35 by vantonie          #+#    #+#             */
/*   Updated: 2022/02/04 14:48:27 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	ft_putnbr_base(unsigned long long n, char *base, int *i_len)
{
	if (n >= ft_strlen(base))
	{
		*i_len = *i_len + 1;
		ft_putnbr_base(n / ft_strlen(base), base, i_len);
	}
	ft_putchar_fd(base[n % ft_strlen(base)], 1);
}

void	ft_printf_u(unsigned int dec, t_len *len)
{
	int	i_len;

	i_len = 0;
	ft_putnbr_base(dec, DEC, &i_len);
	len->len += i_len + 1;
}
