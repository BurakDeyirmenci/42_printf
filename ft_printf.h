/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeyirme <rdeyirme@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:16:04 by rdeyirme          #+#    #+#             */
/*   Updated: 2022/01/29 18:00:46 by rdeyirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

int	ft_putstr(const char *str);
int	ft_putchar(char c);
int	ft_putnbr(int nbr);
int	ft_putnbr_u(unsigned int nbr, char *base);
int	ft_putad(void *ptr);
int	ft_printf(const char *s, ...);
int	ft_putarg(char c, va_list args);

#endif