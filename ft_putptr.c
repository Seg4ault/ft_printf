/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 16:41:36 by men-naim          #+#    #+#             */
/*   Updated: 2026/11/22 18:41:19 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	size_t	n;

	if (!p)
		return (ft_putstr("(nil"));
	n = (size_t) p;
	ft_putstr("0x");
	return (ft_puthex(n, 'x'));
}
