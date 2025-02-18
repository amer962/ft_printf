/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalquraa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:52:00 by aalquraa          #+#    #+#             */
/*   Updated: 2024/09/15 13:22:34 by aalquraa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexal(unsigned long n)

{
	int				counter;
	char			*h;
	char			temp[8];
	int				i;

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

/*int main()
{
	ft_hexl(98);
}*/
