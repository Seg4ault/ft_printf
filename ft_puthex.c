/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: men-naim <men-naim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 15:37:17 by men-naim          #+#    #+#             */
/*   Updated: 2026/11/22 18:42:58 by men-naim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int ft_puthex(uintptr_t n, char c)
{
  char buffer[20];
  char *hexbase;
  int i;

  if (c == 'x')
    hexbase = "0123456789abcdef";
  else 
    hexbase = "0123456789ABCDEF";
  i = 0;
  while (n > 0)
  {
    buffer[i++] = *(hexbase + (n % 16));
    n /= 16;
  }
  buffer[i] = '\0';
  rev_arr(buffer);
  return (ft_putstr(buffer));
}

int main(void)
{
	ft_puthex(122, 'x');
}
