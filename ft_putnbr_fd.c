/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:01:36 by rwattana          #+#    #+#             */
/*   Updated: 2022/04/30 21:30:56 by rwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	un;

	if (n < 0)
	{
		write(fd, "-", 1);
		un = n * (-1);
	}
	else
		un = n;
	if (un >= 10)
		ft_putnbr_fd(un / 10, fd);
	c = (char)((un % 10) + 48);
	write(fd, &c, 1);
}
