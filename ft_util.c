/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 16:47:04 by men-naim          #+#    #+#             */
/*   Updated: 2026/11/24 16:47:38 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	rev_arr(char *p)
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
