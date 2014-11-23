/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 03:42:24 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/23 03:59:14 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_ft(int n, int fd)
{
	char *nbr;

	nbr = ft_itoa(n);
	while(*nbr)
	{
		write(fd, nbr, 1);
		nbr++;
	}
}
