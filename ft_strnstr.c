/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:16:16 by rwattana          #+#    #+#             */
/*   Updated: 2022/04/30 21:31:30 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *nd, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(*nd))
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		if (str[i] == nd[j])
		{
			while (str[i + j] == nd[j] && str[i + j] && nd[j] && (i + j) < len)
				j++;
			if (!(nd[j]))
				return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}
