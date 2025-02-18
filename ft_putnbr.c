/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalquraa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:02:23 by aalquraa          #+#    #+#             */
/*   Updated: 2024/09/15 13:39:35 by aalquraa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)

{
	int	l;

	l = 0;
	if (n == -2147483648)
	{
		l += ft_putchar('-');
		l += ft_putchar('2');
		l += ft_putnbr(147483648);
	}
	else if (0 > n)
	{
		l += ft_putchar('-');
		l += ft_putnbr(-n);
	}
	else if (n > 9)
	{
		l += ft_putnbr(n / 10);
		l += ft_putnbr(n % 10);
	}
	else
	{
		l += ft_putchar(n + 48);
	}
	return (l);
}
