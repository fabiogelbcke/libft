/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 06:28:35 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/21 06:41:10 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *ptr;
	int i;

	ptr = (char*)src;
	i = 0;
	while(i < (int)n)
	{
		*ptr = *((char*)dst);
		dst = (char*)dst + 1;
		i++;
		if (*ptr == c)
		{
			*((char*)dst) = *ptr;
			ptr++;
			return ptr;
		}
	}
	return NULL;
}
