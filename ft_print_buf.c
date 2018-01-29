/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_buf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmorguno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 12:12:35 by vmorguno          #+#    #+#             */
/*   Updated: 2018/01/29 16:05:46 by vmorguno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static inline void	ft_modify_width(t_buf *buffer, t_specs *specs)
{
	int		dif;

	if ((dif = specs->width - buffer->len) > 0)
	{
		if (specs->flags.neg)
			ft_rotate(buffer->buf, buffer->len);
		while (dif > 0)
		{
			if (specs->flags.zero)
				put_buf('0', buffer);
			else
				put_buf(' ', buffer);
			dif--;
		}
		if (!(specs->flags.neg))
			ft_rotate(buffer->buf, buffer->len);
	}
	else
		ft_rotate(buffer->buf, buffer->len);
}
 
static inline void	ft_modify_prec(t_buf *buffer, t_specs *specs)
{
	int		dif;

	dif = (specs->prec - 1) - buffer->len;
	if (specs->type > 1 && specs->type < 11
		&& !((specs->type == 5 || specs->type == 6)
		&& (specs->flags.hash)) && dif > 0)
	{	
		while (dif > 0) 
		{
			put_buf('0', buffer);
			dif--;
		}
	}
	else if ((specs->type == 0 || specs->type == 1) && dif < 0) 	
	{
		ft_bzero(buffer->buf, -dif);
		ft_rotate(buffer->buf, buffer->len);
		buffer->len = buffer->len + dif;
		ft_rotate(buffer->buf, buffer->len);
	}
	else
		return;
}

static inline void	ft_modify_prefix(t_buf *buffer, t_specs *specs)
{
	if (specs->flags.hash)
	{
		if (specs->type > 8 && specs->type < 12)
			put_buf('x', buffer);
		if (specs->type > 4 && specs->type < 12
			&& specs->type != 7 && specs->type != 8)
			put_buf('0', buffer);
	}
	if (specs->type == 10)
		ft_striter(buffer->buf, &ft_toupper);
	if (specs->flags.sign)
		put_buf('-', buffer);
	if (specs->flags.space && specs->type > 1
		&& specs->type < 5 && !specs->flags.sign)
		put_buf(' ', buffer);
	if (specs->flags.plus && specs->type > 1
		&& specs->type < 12 && !specs->flags.sign)
		put_buf('+', buffer);
}

void	ft_print_buf(t_specs *specs, t_buf *buffer)
{
	int m;

	m = 0;
	if (specs->type > 8 && specs->type < 10)
		m = 2;
	else if (specs->type > 6 && specs->type < 9)
		m = 1;
	if (specs->flags.zero && specs->width)
	{	
		specs->prec = specs->width + 1 - specs->flags.sign - specs->flags.hash * m - specs->flags.plus * (!specs->flags.sign ? 1 : 0);
		specs->width = 0;
	}
	if ((*specs).prec >= 1) 
		ft_modify_prec(buffer, specs);
	ft_modify_prefix(buffer, specs);
	ft_modify_width(buffer, specs);
	write(1, buffer->buf, buffer->len);
	ft_bzero(buffer->buf, buffer->len);
	buffer->prntd = buffer->prntd + buffer->len;
	buffer->len = 0;
}
