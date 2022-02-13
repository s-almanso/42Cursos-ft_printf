/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:01:31 by salmanso          #+#    #+#             */
/*   Updated: 2022/02/13 17:55:32 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		len += ft_put_str(va_arg(args, char *));
	else if (format == 'p')
		len += ft_put_ptr(va_arg(args, unsigned long long));
	else if (format == 'd')
		len += ft_put_nbr(va_arg(args, int));
	else if (format == 'i')
		len += ft_put_nbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_put_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		len += ft_putnbr_hex(va_arg(args, unsigned int), format);
	else if (format == 'X')
		len += ft_putnbr_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		len += ft_put_percent();
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_formats(args, format[i + 1]);
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
