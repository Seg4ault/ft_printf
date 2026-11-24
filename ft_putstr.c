/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 12:01:19 by men-naim          #+#    #+#             */
/*   Updated: 2026/11/24 14:47:54 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	unsigned int	i;

	if (!s)
		return (write(1, "(null)", 6));
	i = 0;
	while (*(s + i))
		i++;
	return (write(1, s, i));
}
