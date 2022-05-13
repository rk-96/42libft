/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:33:57 by rwattana          #+#    #+#             */
/*   Updated: 2022/04/30 21:31:35 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strim;
	size_t	st;
	size_t	ed;

	if (!s1 || !set)
		return (NULL);
	st = 0;
	ed = ft_strlen(s1);
	while (ft_strchr(set, s1[st]) && s1[st])
		st++;
	while (ft_strchr(set, s1[ed]) && ed >= st)
		ed--;
	strim = ft_substr(s1, st, (ed - st) + 1);
	return (strim);
}
