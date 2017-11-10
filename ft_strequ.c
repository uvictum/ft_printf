/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmorguno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:37:10 by vmorguno          #+#    #+#             */
/*   Updated: 2017/11/03 16:08:57 by vmorguno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(const char *s1, char const *s2)
{
	if ((ft_strlen(s1) == ft_strlen(s2)) && (ft_strcmp(s1, s2) == 0))
		return (TRUE);
	return (FALSE);
}
