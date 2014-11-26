/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 06:28:35 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/26 15:07:24 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *ptr1;
	unsigned char *ptr2;
	int i;

	i = 0;
	if (!dst || !src)
		return NULL;
	ptr1 = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	while (i < (int)n)
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
		if (*ptr2 == (unsigned char)c)
		{
			ptr2++;
			return (void*)ptr2;
		}
		i++;
	}
	return NULL;
}
