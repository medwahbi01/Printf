/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwahbi <mwahbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:42:42 by mwahbi            #+#    #+#             */
/*   Updated: 2022/05/14 21:45:42 by mwahbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_putc(char c);
int	ft_puts(char *str);
int	ft_putu(unsigned int nb);
int	ft_putx(unsigned int nb, int t);
int	ft_putd(int n);
int	ft_putp(unsigned long long nb);
int	ft_printf(const char *format, ...);
int	ft_flag(char c, va_list ap);

#endif
