/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 13:40:40 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/13 14:52:10 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	void *ptr;
	void *srcptr;
	int i;

	ptr = dst;
	i = 0;
	while (i < n)
	{
		*((char*)ptr) = *((char*)srcptr);
		ptr++;
		srcptr++;
		(void*)ptr;
		(void*)srcptr;
	}
	return (dst);
}

int main(void)
{
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50];

	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);
   
	return(0);
}
