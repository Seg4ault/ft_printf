/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 13:20:55 by men-naim          #+#    #+#             */
/*   Updated: 2026/11/26 11:23:25 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	char	array[11];
	int		i;

	i = 0;
  if (n == 0)
    return (ft_putchar('0'));
	while (n > 0)
	{
		array[i++] = n % 10 + '0';
		n /= 10;
	}
	array[i] = '\0';
	rev_arr(array);
	return (ft_putstr(array));
}
