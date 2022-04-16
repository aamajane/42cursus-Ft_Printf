/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 00:04:38 by aamajane          #+#    #+#             */
/*   Updated: 2022/04/16 00:19:56 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putaddr(void *ptr)
{
	unsigned long	nb;
	char			*base;

	nb = (unsigned long)ptr;
	base = "0123456789abcdef";
	ft_putstr("0x");
	ft_print_addr(nb, base);
}

void	ft_print_addr(unsigned long nb, char *base)
{
	if (nb >= 16)
		ft_print_addr(nb / 16, base);
	ft_putchar(base[nb % 16]);
}

void	ft_puthexa(int n, char c)
{
	unsigned long	nb;
	char			*base;

	nb = (unsigned int)n;
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	ft_print_hexa(nb, base);
}

void	ft_print_hexa(unsigned int nb, char *base)
{
	if (nb >= 16)
		ft_print_hexa(nb / 16, base);
	ft_putchar(base[nb % 16]);
}
