/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 09:10:07 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/21 03:45:04 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *join;
	int size1;
	int size2;

	size1 = 0;
	size2 = 0;
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	join = malloc(sizeof(char) * (size1 + size2 + 1));
	size1 = 0;
	while (s1[size1])
	{
		join[size1] = s1[size1];
		size1++;
	}
	size2 = 0;
	while(s2[size2])
	{
		join[size1 + size2] = s2[size2];
		size2++;
	}
	join[size1 + size2] = '\0';
	return join;
}
