/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 18:16:58 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/17 18:48:05 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *strcpy(char *dst, const char *src)
{
	char *dstptr;

	dstptr = dst;
	while (*src)
	{
		*dstptr = *src;
		*src++;
		*dstptr++;
	}
	*dstptr = '\0';
	return (dst);
}
