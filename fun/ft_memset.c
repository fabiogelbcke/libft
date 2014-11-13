/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 13:00:04 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/13 13:29:08 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void *ft_memset(void *b, int c, size_t len)
{
	int i;
	char *str;

	str = b;
	i = 0;
	while (i < len)
	{
		str[i] =  c;
		i++;
	}
	return b;
}
