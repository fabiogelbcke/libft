/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 05:57:01 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/18 05:58:43 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memalloc(size_t size)
{
	void *mem;

	mem = malloc(size);
	if (!mem)
	{
		return NULL;
	}
	return mem;
}
