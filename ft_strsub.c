/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 08:51:25 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/21 02:48:06 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char *ft_strstub(char const *s, unsigned int start, size_t len)
{
	int strlen;
	int i;
	char *sub;

	strlen = 0;
	while (s[strlen])
		strlen++;
	if ((int)start + (int)len >= strlen)
		return NULL;
	sub = malloc(sizeof(char) * (len + 1));
	i = start;
	while (i < (int)start + (int)len)
	{
		sub[i - start] = s[i];
		i++;
	}
	sub[i - start] = '\0';
	return sub;
}
