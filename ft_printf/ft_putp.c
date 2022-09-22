/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwahbi <mwahbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:42:57 by mwahbi            #+#    #+#             */
/*   Updated: 2022/05/14 21:45:18 by mwahbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putp(unsigned long long nb)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	if (nb >= 16)
	{
		i += ft_putp(nb / 16);
		i += ft_putp(nb % 16);
	}
	if (nb < 16)
		i += ft_putc(hex[nb]);
	return (i);
}
