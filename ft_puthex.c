/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 15:37:17 by men-naim          #+#    #+#             */
/*   Updated: 2026/11/27 13:07:38 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char c)
{
	char	buffer[9];
	char	*hexbase;
	int		i;

	if (c == 'x')
		hexbase = "0123456789abcdef";
	else
		hexbase = "0123456789ABCDEF";
	i = 0;
	if (n == 0)
		return (ft_putchar('0'));
	while (n > 0)
	{
		buffer[i++] = *(hexbase + (n % 16));
		n /= 16;
	}
	buffer[i] = '\0';
	rev_arr(buffer);
	return (ft_putstr(buffer));
}
