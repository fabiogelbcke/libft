/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 04:14:20 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/18 04:16:52 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *strnstr(const char *s1, const char *s2, size_t n)
{
    char *ptr1;
    char *ptr2;
	int i;

	i = 0;
    while(*s1 && i < n)
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
		i++;
    }
    return NULL;
}
