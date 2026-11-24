/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 16:41:36 by men-naim          #+#    #+#             */
/*   Updated: 2026/11/24 15:02:53 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	int	return_val;

	if (!p)
		return (ft_putstr("(nil)"));
	n = (size_t) p;
	return_val = ft_putstr("0x");
	if (return_val == -1)
		return (-1);
	return_val += ft_puthex(n, 'x');
	if (return_val == 1)
		return (-1);
	return (return_val);
}
