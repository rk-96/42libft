/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:27:50 by rwattana          #+#    #+#             */
/*   Updated: 2022/04/30 21:31:32 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;
	char	find;

	c = (unsigned char)c;
	save = (char *)0;
	while (*s)
	{
		find = *s;
		if (find == c)
			save = (char *)s;
		s++;
	}
	if (c == 0)
		save = ft_strchr(s, 0);
	return (save);
}
