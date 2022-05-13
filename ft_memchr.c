/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 19:03:32 by rwattana          #+#    #+#             */
/*   Updated: 2022/04/30 21:30:38 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	find;

	i = 0;
	find = (unsigned char)c;
	while (i < n)
	{
		if (*((unsigned char *)s) == find)
			return ((void *)s);
		i++;
		s++;
	}
	return (0);
}
