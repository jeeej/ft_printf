/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 14:59:53 by jprevota          #+#    #+#             */
/*   Updated: 2017/04/24 18:02:45 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../inc/libft.h"
#include <stdio.h>
#include "../inc/ft_printf.h"
#include <wchar.h>

int	main(void)
{
<<<<<<< HEAD
	int ft;
	int pr;
     char y = '$';
     int  x = 42;
     void *p = NULL;
	 wchar_t wchar = L'\x82';
	 wchar_t *wstr = L"J\130rome";
     if (!(p = malloc(1)))
      return (-1);
     //char *s = "Yolo";
     char *s2 = "I'm CEO Bitch !";

     ft_putendl("My Ft_printf result :");
     ft = ft_printf("Yolo ! %s %d - %u - %o - %x - %c pointer adress %p - %% - %C - %S", s2, x, x, x, x, y, p, wchar, wstr);
	 pr = printf("Yolo ! %s %d - %u - %o - %x - %c pointer adress %p - %% - %C - %S", s2, x, x, x, x, y, p, wchar, wstr);
	 ft_putnbr(ft);
	 ft_putchar('-');
	 ft_putnbr(pr);
	 ft_putchar('\n');
	 ft_putendl("Real Printf result :");
     free(p);
     return (0);
=======
	char	y = '$';
	int 	x = -42;
	void	*p = NULL;
	char	*s2 = NULL;

	if (!(p = malloc(1)))
		return (-1);

	ft_putendl("My Ft_printf result :");
	ft_printf("Yolo ! %s %d - %u - %o - %x - %X - %c pointer adress %p", s2, x, x, x, x, x, y, p);
	ft_putendl("Real Printf result :");
	printf("Yolo ! %s %d - %u - %o - %x - %X - %c pointer adress %p", s2, x, x, x, x, x, y, p);
	free(p);
	return (0);
>>>>>>> 7d1059df80994d3b0bd1e3352e5f04b26ae17231
}
