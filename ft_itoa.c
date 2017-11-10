/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmorguno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:18:10 by vmorguno          #+#    #+#             */
/*   Updated: 2017/11/08 15:27:28 by vmorguno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*num;
	int		count;
	int		i;
	char	*start;

	if (n == 0)
		return ("0");
	i = ft_intlen(n);
	num = ft_strnew(n < 0 ? i++ : i);
	start = num;
	if (n < 0)
	{
		*num = '-';
		num++;
		i--;
	}
	count = ft_sqr(10, i - 1);
	while (count > 0)
	{
		*num = (n < 0 ? -(n / count) + 48 : n / count + 48);
		n = n - ((n / count) * count);
		count = count / 10;
		num++;
	}
	return (start);
}
