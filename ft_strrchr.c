/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 20:45:38 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/23 06:48:09 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *ptr;
	char *ptr2;

	ptr = NULL;
	ptr2 = (char*)s;
	while(*ptr2)
	{
		if (*ptr2 == c)
			ptr = ptr2;
		ptr2++;
	}
	return ptr;
}
