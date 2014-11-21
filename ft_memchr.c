/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 06:54:26 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/21 07:01:27 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;
	int i;

	i = 0;
	ptr = (unsigned char*)s;
	while (i < (int)n)
	{
		if (*ptr == (char)c)
			return ptr;
		ptr++;
	}
	return NULL;
}
