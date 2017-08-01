/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c  		                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 22:50:50 by jprevota          #+#    #+#             */
/*   Updated: 2017/06/16 22:50:50 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../inc/ft_printf.h"

int	main(void)
{
	int ret;

	ret = 0;
	ft_putendl("My printf result :\n");
	ret = ft_printf("%10.5d", 4242);
	ft_putchar('\n');
	printf("RET = %d\n", ret);
	ft_putendl("Real printf result :\n");
	printf("%10.5d", 4242);

	return (0);
}
