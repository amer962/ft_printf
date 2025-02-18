/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalquraa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:26:26 by aalquraa          #+#    #+#             */
/*   Updated: 2024/09/15 12:19:13 by aalquraa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, const char *));
	else if (c == 'p')
		len += ft_pointer(va_arg(args, void *));
	else if (c == 'i' || c == 'd')
		len += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		len += ft_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		len += ft_hexal(va_arg(args, unsigned int));
	else if (c == 'X')
		len += ft_hexau(va_arg(args, unsigned int));
	else if (c == '%')
	{
		write(1, &"%", 1);
		len += 1;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	len = 0;
	va_start(args, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i += 1;
			len += ft_format(args, str[i]);
			i++;
		}
		else
		{
			len += ft_putchar(str[i]);
			i++;
		}
	}
	return (len);
}
