/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalquraa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:22:29 by aalquraa          #+#    #+#             */
/*   Updated: 2024/09/15 13:34:42 by aalquraa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexa(unsigned long n)
{
	int		counter;
	char	*h;
	char	temp[16];
	int		i;

	i = 0;
	h = "0123456789abcdef";
	if (n == 0)
		return (write(1, &h[0], 1));
	counter = 0;
	while (n != 0)
	{
		temp[i] = h[n % 16];
		n /= 16;
		counter++;
		i++;
	}
	while (i--)
		write(1, &temp[i], 1);
	return (counter);
}

int	ft_pointer(void *p)

{
	int	i;

	if (p == NULL)
	{
		return (ft_putstr("(nil)"));
	}
	else
	{
		ft_putchar('0');
		ft_putchar('x');
		i = ft_hexa((unsigned long)p);
	}
	return (2 + i);
}
