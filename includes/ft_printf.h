/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:20:03 by aamajane          #+#    #+#             */
/*   Updated: 2022/04/16 00:20:02 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

// ft_printf.c
int		ft_printf(const char *format, ...);
void	ft_conversion(char format, va_list args);
void	ft_putchar(char c);

// ft_utils_1.c
void	ft_putstr(char *s);
void	ft_putnbr(int n);
void	ft_putuns(unsigned int n);

// ft_utils_2.c
void	ft_putaddr(void *ptr);
void	ft_print_addr(unsigned long nb, char *base);
void	ft_puthexa(int n, char c);
void	ft_print_hexa(unsigned int nb, char *base);

#endif
