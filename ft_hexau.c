/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexau.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalquraa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:02:18 by aalquraa          #+#    #+#             */
/*   Updated: 2024/09/15 13:37:37 by aalquraa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexau(unsigned long n)

{
	int		counter;
	char	*h;
	char	temp[8];
	int		i;

	i = 0;
	h = "0123456789ABCDEF";
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
		ft_hexl(985);
}
*/
