/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmorguno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 17:15:40 by vmorguno          #+#    #+#             */
/*   Updated: 2017/11/06 16:07:36 by vmorguno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	unsigned int i;

	i = 0;
	while (n > i)
	{
		if (src[i] == '\0')
		{
			ft_bzero(&dest[i], (n - i));
			break ;
		}
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
