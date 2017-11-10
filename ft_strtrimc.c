/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmorguno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 13:01:40 by vmorguno          #+#    #+#             */
/*   Updated: 2017/11/09 19:56:02 by vmorguno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrimc(char const *s, char c)
{
	char	*trim;
	int		i;
	int		end;

	if (!*s)
		return ("");
	end = ft_strlen(s) - 1;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[end] == c && end > 0)
		end--;
	if (end < i)
		return ("");
	trim = ft_strsub(s, i, end - i + 1);
	return (trim);
}
