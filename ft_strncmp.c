/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmorguno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 16:40:26 by vmorguno          #+#    #+#             */
/*   Updated: 2017/11/30 14:43:34 by vmorguno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
  
#include "libft.h"
#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s1_u;
	unsigned char	*s2_u;

	s1_u = (unsigned char *)s1;
	s2_u = (unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	while (n > i + 1 && s1_u[i] == s2_u[i] && (s1_u[i] && s2_u[i]))
	{
		i++;
	}
	return ((int)(s1_u[i] - s2_u[i]));
}
