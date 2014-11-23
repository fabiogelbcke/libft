/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 19:41:57 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/23 06:36:58 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	int len;
	char *srcptr;
	int i;

	srcptr = (char*)src;
	len = 0;
	i = 0;
	while (*(dst++))
	{
		len++;
		i++;
	}
	while (len < (int)size - 1 && *srcptr)
	{
		dst[i++] = *(srcptr++);
		len++;
	}
	dst[i] = '\0';
	srcptr = (char*)src;
	while(*(srcptr++))
		len++;
	return len;
}
