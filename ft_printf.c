/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmorguno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 14:14:26 by vmorguno          #+#    #+#             */
/*   Updated: 2018/01/25 17:53:23 by vmorguno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_specs 		*specs;
	va_list			args;
	static t_buf 	buffer;
	int				n;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			specs = ft_get_specs(&format);
			ft_form_buf(specs, args, &buffer);
			ft_print_buf(specs, &buffer);
		}
		else
		{
			write(1, format, 1);
			format++;
			buffer.prntd++;
		}
	}
	va_end(args);
	n = buffer.prntd;
	buffer.prntd = 0;
	return(n);
}
