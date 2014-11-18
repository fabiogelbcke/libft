/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 20:50:00 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/18 03:43:55 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *strstr(const char *s1, const char *s2)
{
	char *ptr1;
	char *ptr2;
	
	while(*s1)
	{
		ptr1 = s1;
		ptr2 = s2;
		while (*ptr1 != '\0')
		{
			if (*ptr1 != *ptr2)
				break;
			ptr1++;
			ptr2++;
		}
		if (*ptr1 == '\0')
			return s1;
		s1++;
	}
	return NULL;
}
