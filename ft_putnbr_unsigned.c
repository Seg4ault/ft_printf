/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 13:20:55 by men-naim          #+#    #+#             */
/*   Updated: 2026/11/22 13:21:07 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

static void rev_arr(char *p)
{
  int start;
  int end;
  char tmp;

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

int ft_putnbr_unsigned(unsigned int n)
{
  char array[11];
  int i;

  i = 0;
  while (n > 0)
  {
    array[i++] = n % 10 + '0';
    n /= 10;
  }
  array[i] = '\0';
  rev_arr(array);
  return (ft_putstr(array));
}

int main(void)
{
    ft_putnbr_unsigned(UINT_MAX);
}
