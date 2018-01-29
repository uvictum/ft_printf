/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmorguno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 17:23:14 by vmorguno          #+#    #+#             */
/*   Updated: 2018/01/29 14:59:47 by vmorguno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static inline void	ft_put_bin(int b, int bit_n, t_buf *buffer)
{
	int				mask[4] = {192, 224, 240, 128};
	unsigned char	cw;

	if (bit_n == 1)
	{
		put_buf((char)b, buffer);
		return;
	}
	cw = ((b << (6 * (bit_n - 1))) << (25 + bit_n)) >> (25 + bit_n);
	put_buf((cw | mask[bit_n - 2]), buffer);
	bit_n --;
	while (bit_n > 0)
	{
		cw = (((b << (6 * (bit_n - 1))) << (25 + bit_n)) >> (25 + bit_n));
		put_buf((cw | mask[3]), buffer);
		bit_n --;
	}
}

static inline int ft_size(wchar_t wc)
{
	int				b;

	b = (int)wc;

	if (b < 128)
		return (1);
	else if (b >= 128 && b < 2048)
		return (2);
	else if (b >= 2048 && b < 655356)
		return (3);
	else
		return (4);
}
static inline void	ft_wstr(va_list ap, t_buf *buffer)
{
	wchar_t		*s;

	s = va_arg(ap, wchar_t *);
	while (*s)
	{
		ft_put_bin(*s ,ft_size(*s), buffer);
		s++;
	}
}

void	ft_str(t_specs *specs, va_list ap, t_buf *buffer)
{
	char 		*str;
	char		N_c[7] = "(null)";
	int			i;

	i = 0;
	if (specs->type == 1 || specs->size == 'l')
		ft_wstr(ap, buffer);
	str = va_arg(ap, char *);
	if (str)
		while (*str)
		{
			put_buf(*str, buffer);
			str++;
		}
	else
		while (i < 6)
		{
			put_buf(N_c[i], buffer);
			i++;
		}
}

void	ft_wchar(va_list ap, t_buf *buffer)
{
	wchar_t			c;
	int				b;

	c = va_arg(ap, wchar_t);
	b = (int)c;
	ft_put_bin(b, ft_size(c), buffer);
}