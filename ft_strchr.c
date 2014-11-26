/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 20:07:40 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/26 13:20:41 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import <string.h>

char		*ft_strchr(const char *s, int c)
{
	char	*ptr;

	if (!s)
		return NULL;
	ptr = (char*)s;
	while(*ptr)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	if (c == 0)
		return ptr;
	return (NULL);
}
