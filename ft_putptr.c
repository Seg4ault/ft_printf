/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 16:41:36 by men-naim          #+#    #+#             */
/*   Updated: 2026/11/26 11:19:14 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	size_t	n;
	int		i;
	char	*base;
	char	buffer[19];

	if (!p)
		return (ft_putstr("(nil)"));
	buffer[0] = '0';
	buffer[1] = 'x';
	base = "0123456789abcdef";
	n = (size_t) p;
	i = 2;
	while (n > 0)
	{
		buffer[i++] = base[n % 16];
		n /= 16;
	}
	buffer[i] = '\0';
	rev_arr(buffer + 2);
	return (ft_putstr(buffer));
}
