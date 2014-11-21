/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 04:14:20 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/21 03:17:32 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    char *ptr1;
    char *ptr2;
	char *ptrs1;
	int i;

	i = 0;
	ptrs1 = (char*)s1;
    while(*ptrs1 && i < (int)n)
    {
        ptr1 = (char*)ptrs1;
        ptr2 = (char*)s2;
        while (*ptr1 != '\0')
        {
            if (*ptr1 != *ptr2)
                break;
            ptr1++;
            ptr2++;
        }
        if (*ptr1 == '\0')
            return (char*)ptrs1;
        ptrs1++;
		i++;
    }
    return NULL;
}
