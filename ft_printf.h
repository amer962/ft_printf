/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalquraa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:29:27 by aalquraa          #+#    #+#             */
/*   Updated: 2024/09/15 13:37:00 by aalquraa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_hexal(unsigned long n);
int	ft_hexau(unsigned long n);
int	ft_pointer(void *p);
int	ft_format(va_list args, const char c);
int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_putstr(const char *str);
int	ft_unsigned(unsigned int n);

#endif
