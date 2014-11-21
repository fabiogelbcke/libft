/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 06:35:15 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/21 06:50:49 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *ptr;
	int i;
	void *ret;

	ret = dst;
	i = 0;
	ptr = (char*)src;
	while (i++ < (int)len)
	{
		*(char*)dst = *(ptr++);
		dst = (char*)dst + 1;
	}
	return ret;
}
