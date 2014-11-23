/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 20:50:00 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/23 06:43:32 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strstr(const char *s1, const char *s2)
{
	char *ptr1;
	char *ptr2;
	char *ptr3;
	
	ptr3 = (char*)s1;
	while(*ptr3)
	{
		ptr1 = (char*)ptr3;
		ptr2 = (char*)s2;
		while (*ptr1 != '\0')
		{
			if (*ptr1 != *ptr2)
				break;
			if (*ptr2 == '\0')
				return ptr3;
			ptr1++;
			ptr2++;
		}
		if (*ptr1 == '\0')
			return (char*)ptr3;
		ptr3++;
	}
	return NULL;
}
