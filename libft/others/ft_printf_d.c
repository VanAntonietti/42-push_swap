/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:51:44 by vantonie          #+#    #+#             */
/*   Updated: 2022/02/04 14:48:41 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_printf_d(unsigned int dec, t_len *len)
{
	char	*str;

	str = ft_itoa(dec);
	ft_putstr_fd(str, 1);
	len->len += ft_strlen(str);
	free(str);
}
