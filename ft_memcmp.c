/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 07:04:12 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/23 04:30:36 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ptr1;
	unsigned char *ptr2;
	int i;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (*ptr1 == *ptr2 & i < (int)n)
	{
		ptr1++;
		ptr2++;
	}
	return *(int*)ptr1 - *(int*)ptr2;
}
