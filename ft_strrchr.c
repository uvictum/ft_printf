/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmorguno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 18:58:37 by vmorguno          #+#    #+#             */
/*   Updated: 2017/11/01 14:27:55 by vmorguno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	end;
	int i;

	i = 0;
	end = ft_strlen(s) + 1;
	while (end >= i)
	{
		if (s[end] == (char)c)
			return ((char *)&s[end]);
		end--;
	}
	return (NULL);
}
