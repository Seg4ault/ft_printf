/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 12:01:52 by men-naim          #+#    #+#             */
/*   Updated: 2026/11/22 18:40:57 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

int ft_putstr(const char *s);
int ft_putnbr(int n);
int ft_putnbr_unsigned(unsigned int n);
int ft_puthex(uintptr_t n, char c);
int ft_putptr(void *p);
#endif
