/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwahbi <mwahbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:43:12 by mwahbi            #+#    #+#             */
/*   Updated: 2022/05/14 21:45:32 by mwahbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putx(unsigned int nb, int t)
{
	char	*hex;
	char	*thex;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	thex = "0123456789ABCDEF";
	if (nb >= 16)
	{
		i += ft_putx(nb / 16, t);
		i += ft_putx(nb % 16, t);
	}
	if (t == 1)
	{
		if (nb < 16)
			i += ft_putc(hex[nb]);
	}
	else
		if (nb < 16)
			i += ft_putc(thex[nb]);
	return (i);
}
