/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 08:48:41 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/21 03:34:56 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && i < (int)n)
	{
		if (s1[i] != s2[i])
			return 0;
		i++;
	}
	if (i == (int)n)
		return 1;
	if (s1[i] || s2[i])
		return 0;
	return 1;
}
