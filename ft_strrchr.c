/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 20:45:38 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/17 20:49:34 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char * strrchar(const char *s, int c)
{
	char *ptr;

	ptr = NULL;
	while(*s)
	{
		if (*s = c)
			ptr = s;
	}
	return ptr;
}
