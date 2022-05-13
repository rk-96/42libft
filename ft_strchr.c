/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:02:03 by rwattana          #+#    #+#             */
/*   Updated: 2022/04/30 21:31:05 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	to_find;

	to_find = c;
	while (*s)
	{
		if (*s == to_find)
			return ((char *)s);
		s++;
	}
	if (to_find == '\0')
		return ((char *)s);
	return (0);
}
