/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_ft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 03:07:37 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/23 03:58:53 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_ft(char const *s, int fd)
{
	char *ptr;
	int size;

	size = 0;
	ptr = (char*)s;
	while (*(ptr++))
		size++;
	write (fd, s, size);
	write(fd, "\n", 1);
}
