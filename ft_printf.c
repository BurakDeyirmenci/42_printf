/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:57:40 by rdeyirme          #+#    #+#             */
/*   Updated: 2022/01/29 18:01:10 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putarg(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putnbr_u(va_arg(args, unsigned int), \
		"0123456789"));
	else if (c == 'x')
		return (ft_putnbr_u(va_arg(args, unsigned int), \
		"0123456789abcdef"));
	else if (c == 'X')
		return (ft_putnbr_u(va_arg(args, unsigned int), \
		"0123456789ABCDEF"));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'c')
		return (ft_putchar((char)va_arg(args, int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'p')
	{
		ft_putstr("0x");
		return (ft_putad(va_arg(args, void *)) + 2);
	}
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		count;
	va_list	args;

	va_start(args, s);
	count = 0;
	while (*s)
	{
		if (*s == '%')
			count += ft_putarg(*++s, args);
		else
			count += ft_putchar(*s);
		s++;
	}
	va_end(args);
	return (count);
}
