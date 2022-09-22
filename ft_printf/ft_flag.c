/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwahbi <mwahbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:42:30 by mwahbi            #+#    #+#             */
/*   Updated: 2022/05/14 21:44:48 by mwahbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag(char c, va_list ap)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putc(va_arg(ap, int));
	if (c == 'd' || c == 'i')
		i += ft_putd(va_arg(ap, int));
	if (c == 'p')
	{
		i += ft_puts("0x");
		i += ft_putp(va_arg(ap, unsigned long long));
	}
	if (c == 's')
		i += ft_puts(va_arg(ap, char *));
	if (c == 'u')
		i += ft_putu(va_arg(ap, unsigned int));
	if (c == 'x')
		i += ft_putx(va_arg(ap, unsigned int), 1);
	if (c == 'X')
		i += ft_putx(va_arg(ap, unsigned int), 0);
	if (c == '%')
		i += ft_putc('%');
	return (i);
}
