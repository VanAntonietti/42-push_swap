/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:01:22 by vantonie          #+#    #+#             */
/*   Updated: 2022/02/04 14:48:15 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	ft_printf_sort(const char *format, va_list ap, t_len *len)
{
	if (*format == 'c')
		ft_printf_c(va_arg(ap, int), len);
	else if (*format == 'd')
		ft_printf_d(va_arg(ap, signed int), len);
	else if (*format == 'i')
		ft_printf_i(va_arg(ap, signed int), len);
	else if (*format == 'p')
		ft_printf_p(va_arg(ap, void *), len);
	else if (*format == 's')
		ft_printf_s(va_arg(ap, char *), len);
	else if (*format == 'u')
		ft_printf_u(va_arg(ap, unsigned int), len);
	else if (*format == 'x')
		ft_printf_x(va_arg(ap, unsigned int), len);
	else if (*format == 'X')
		ft_printf_xu(va_arg(ap, unsigned int), len);
	else if (*format == '%')
		ft_printf_percentage(len);
}

static void	ft_vfprintf(const char *format, va_list ap, t_len *len)
{
	len->i = 0;
	len->len = 0;
	while (format[len->i] != '\0')
	{
		if (format[len->i] == '%')
		{
			len->i++;
			ft_printf_sort(&format[len->i], ap, len);
			len->i++;
		}
		else
		{
			ft_putchar_fd(format[len->i], 1);
			len->i++;
			len->len++;
		}
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	t_len	*len;
	int		print_len;

	len = malloc(1 * sizeof(t_len));
	if (!len)
		len = NULL;
	va_start(ap, format);
	ft_vfprintf(format, ap, len);
	va_end(ap);
	print_len = len->len;
	free(len);
	return (print_len);
}
