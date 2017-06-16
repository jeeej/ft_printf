/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_conv.c  	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 22:50:50 by jprevota          #+#    #+#             */
/*   Updated: 2017/06/16 22:50:50 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int		char_conv(t_arg *arg, va_list ap)
{
	if (arg->conv == '%')
		arg->converted_form = str_memcat(arg->converted_form, "%", 1);
	else
	{
		arg->argv.c_arg = va_arg(ap, int);
		arg->converted_form = str_memcat(arg->converted_form, &arg->argv.c_arg, 1);
	}
	return (1);
}

int		str_conv(t_arg *arg, va_list ap)
{
	arg->argv.str_arg = va_arg(ap, char *);
	arg->converted_form = str_memcat(arg->converted_form, arg->argv.str_arg, ft_strlen(arg->argv.str_arg));
	return (1);
}

int		wchar_conv(t_arg *arg, va_list ap)
{
	wchar_t	*tmp;

	if (!(tmp = (wchar_t *)malloc(1 * sizeof(wchar_t))))
		return (0);
	ft_memset(tmp, '\0', 1);
	arg->argv.wchar_arg = va_arg(ap, wchar_t);
	tmp = str_to_wstr(arg->converted_form);
	arg->wconverted_form = wstr_memcat(arg->wconverted_form, tmp, ft_wstrlen(tmp));
	arg->wconverted_form = wstr_memcat(arg->wconverted_form, &arg->argv.wchar_arg, 1 * sizeof(wchar_t));
	return (1);
}

int		wstr_conv(t_arg *arg, va_list ap)
{
	arg->argv.wstr_arg = va_arg(ap, wchar_t *);
	return (1);
}
