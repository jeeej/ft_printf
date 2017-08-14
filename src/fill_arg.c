/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_arg.c  	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprevota <jprevota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 22:50:50 by jprevota          #+#    #+#             */
/*   Updated: 2017/06/16 22:50:50 by jprevota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	fill_arg(t_arg *arg, va_list ap)
{
	set_type_arg(arg);
	set_conv_arg(arg);
	/*if (parse_flags(arg) == FALSE)
	{
		arg->wconverted_form = get_undefined_behaviour(arg);
		return (1);
	}*/
	//parse_flags(arg);
	apply_size_flag(arg);
	convert_argv(arg, ap);
	apply_flags(arg);
	return (1);
}

void	set_type_arg(t_arg *arg)
{
	wchar_t	c;

	c = arg->str_form[ft_wstrlen(arg->str_form) - 1];
	if (c == 'd' || c == 'i' || c == 'D' || c == 'o' || c == 'O' || c == 'u'
		|| c == 'U' || c == 'x' || c == 'X' || c == 'p')
		arg->type = T_INT;
	if (c == 'c')
		arg->type = T_CHAR;
	if (c == 'C')
		arg->type = T_WCHAR;
	if (c == 's')
		arg->type = T_STR;
	if (c == 'S')
		arg->type = T_WSTR;
	if (c == '%')
		arg->type = T_CHAR;
	if (c == 'p')
		arg->type = T_PTR;
}

void	set_conv_arg(t_arg *arg)
{
	wchar_t	c;

	c = arg->str_form[ft_wstrlen(arg->str_form) - 1];
	set_nb_conv_arg(arg, c);
	set_char_conv_arg(arg, c);
}

void	set_nb_conv_arg(t_arg *arg, wchar_t c)
{
	if (c == 'd' || c == 'i')
		arg->conv = -10;
	if (c == 'D')
		arg->conv = -100;
	if (c == 'o')
		arg->conv = 8;
	if (c == 'O')
		arg->conv = 80;
	if (c == 'u')
		arg->conv = 10;
	if (c == 'U')
		arg->conv = 100;
	if (c == 'x')
		arg->conv = 16;
	if (c == 'X')
		arg->conv = 160;
}

void	set_char_conv_arg(t_arg *arg, wchar_t c)
{
	if (c == 'c')
		arg->conv = 2;
	if (c == 'C')
		arg->conv = 20;
	if (c == 's')
		arg->conv = 3;
	if (c == 'S')
		arg->conv = 30;
	if (c == 'p')
		arg->conv = 4;
	if (c == '%')
		arg->conv = '%';
}