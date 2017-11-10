/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmorguno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 18:39:20 by vmorguno          #+#    #+#             */
/*   Updated: 2017/11/09 19:55:18 by vmorguno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*trim;
	unsigned int	i;
	unsigned int	end;

	end = ft_strlen(s) - 1;
	i = 0;
	while (ft_iswspace(s[i]))
		i++;
	while (ft_iswspace(s[end]))
		end--;
	trim = ft_strsub(s, i, end - i + 1);
	return (trim);
}
