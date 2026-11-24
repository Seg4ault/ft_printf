/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 12:10:52 by men-naim          #+#    #+#             */
/*   Updated: 2026/11/24 16:46:57 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	array[12];
	int		i;
	long	nb;
	int		sign;

	i = 0;
	nb = n;
	sign = 0;
	if (n == 0)
		return (ft_putchar('0'));
	if (n < 0)
	{
		sign++;
		nb = -nb;
		array[i++] = '-';
	}
	while (nb > 0)
	{
		array[i++] = nb % 10 + '0';
		nb /= 10;
	}
	array[i] = '\0';
	rev_arr(array + sign);
	return (ft_putstr(array));
}
