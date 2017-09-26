/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 12:54:50 by pbeller           #+#    #+#             */
/*   Updated: 2016/11/23 12:54:52 by pbeller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	str = NULL;
	while (1)
	{
		if (*s == c)
			str = (char *)s;
		if (*s == 0)
			break ;
		s++;
	}
	return (str);
}
