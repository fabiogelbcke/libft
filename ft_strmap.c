/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 08:40:38 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/19 08:44:43 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strmap(char const *s, char (*f)(char))
{
	char *ret;
	int i;

	i = 0;
	while(s[i])
	{
		i++;
	}
	ret = malloc(sizeof(char) * (i + 1));
	if (!ret)
		return NULL;
	i = 0;
	while (s[i])
	{
		ret[i] = (*f)(s[i]);
		i++;
	}
	ret[i] = '\0';
}
