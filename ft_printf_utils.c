/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:18:23 by rdeyirme          #+#    #+#             */
/*   Updated: 2022/01/29 18:00:55 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	count;

	if (str == NULL)
		str = "(null)";
	count = 0;
	while (str && *str)
	{
		ft_putchar_fd(*str++, 1);
		count++;
	}
	return (count);
}

int	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_putnbr(int nbr)
{
	int		count;

	count = 0;
	if (nbr == -2147483648)
	{
		count += ft_putstr("-2");
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
		count += ft_putnbr(nbr / 10);
	count += ft_putchar((nbr % 10) + '0');
	return (count);
}

int	ft_putnbr_u(unsigned int nbr, char *base)
{
	int				count;
	unsigned int	base_len;

	count = 0;
	base_len = ft_strlen(base);
	if (nbr > (base_len - 1))
		count += ft_putnbr_u(nbr / base_len, base);
	count += ft_putchar(base[nbr % base_len]);
	return (count);
}

int	ft_putad(void *ptr)
{
	unsigned long	p;
	int				count;

	count = 0;
	p = (unsigned long)ptr;
	if (p > 15)
		count += ft_putad((void *)(p / 16));
	count += ft_putchar("0123456789abcdef"[p % 16]);
	return (count);
}
