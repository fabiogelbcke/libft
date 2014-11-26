/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 06:35:15 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/26 18:29:35 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *ptr;
	unsigned char *ptrdst;
	unsigned char *temp;
	int i;

	i = 0;
	if (!dst || !src)
		return NULL;
	temp = (void*)malloc(len);
	ptr = (unsigned char*)src;
	while (i < (int)len)
	{
		temp[i] = ptr[i];
		i++;
	}
	i = 0;
	ptr = (unsigned char*)src;
	ptrdst = (unsigned char*)dst;
	while (i < (int)len)
	{
		ptrdst[i] = temp[i];
		i++;
	}
	return dst;
}
/*
int main ()
{
	char str[] = "memmove can be very useful......";
	ft_memmove (str+20,str+15,11);
	puts(str);
	return 0;
}
*/
