/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:24:18 by aamajane          #+#    #+#             */
/*   Updated: 2022/04/16 00:22:38 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	g_count;

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	g_count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format)
				ft_conversion(*format, args);
		}
		else
			ft_putchar(*format);
		if (*format)
			format++;
	}
	va_end(args);
	return (g_count);
}

void	ft_conversion(char format, va_list args)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int));
	else if (format == 's')
		ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		ft_putaddr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		ft_putuns(va_arg(args, unsigned int));
	else if (format == 'x')
		ft_puthexa(va_arg(args, int), 'x');
	else if (format == 'X')
		ft_puthexa(va_arg(args, int), 'X');
	else if (format == '%')
		ft_putchar('%');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	g_count++;
}
