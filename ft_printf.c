/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 12:02:50 by men-naim          #+#    #+#             */
/*   Updated: 2026/11/24 18:46:33 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	formatter(const char *fmt, va_list *arg)
{
	if (*fmt == '\0')
		return (-1);
	if (*fmt == 'd' || *fmt == 'i')
		return (ft_putnbr(va_arg(*arg, int)));
	else if (*fmt == 'c')
		return (ft_putchar(va_arg(*arg, int)));
	else if (*fmt == 's')
		return (ft_putstr(va_arg(*arg, char *)));
	else if (*fmt == 'u')
		return (ft_putnbr_unsigned(va_arg(*arg, unsigned int)));
	else if (*fmt == 'p')
		return (ft_putptr(va_arg(*arg, void *)));
	else if (*fmt == 'X' || *fmt == 'x')
		return (ft_puthex(va_arg(*arg, size_t), *fmt));
	else if (*fmt == '%')
		return (ft_putchar('%'));
	else if (ft_putchar('%') == -1 || ft_putchar(*fmt) == -1)
		return (-1);
	return (2);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		return_val;
	int		total;
	int		i;

	if (!fmt)
		return (-1);
	va_start(args, fmt);
	i = 0;
	total = 0;
	while (*(fmt + i))
	{
		if (*(fmt + i) == '%')
			return_val = formatter((fmt + ++i), &args);
		else
			return_val = ft_putchar(*(fmt + i));
		if (return_val == -1)
			return (va_end(args), -1);
		total += return_val;
		i++;
	}
	return (va_end(args), total);
}
