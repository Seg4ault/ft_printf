/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 12:10:52 by men-naim          #+#    #+#             */
/*   Updated: 2026/11/22 16:08:58 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	rev_arr(char *p)
{
	int		start;
	int		end;
	char	tmp;

	start = 0;
	end = 0;
	while (*(p + end))
		end++;
	while (--end > start)
	{
		tmp = *(p + end);
		*(p + end) = *(p + start);
		*(p + start++) = tmp;
	}
}

int	ft_putnbr(int n)
{
	char	array[12];
	int		i;
	long	nb;

	i = 0;
	nb = n;
	if (n < 0)
	{
		nb = -nb;
		array[i++] = '-';
	}
	while (nb > 0)
	{
		array[i++] = nb % 10 + '0';
		nb /= 10;
	}
	array[i] = '\0';
	rev_arr(array + 1);
	return (ft_putstr(array));
}
