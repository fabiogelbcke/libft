/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 09:34:28 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/21 08:15:10 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int numberofwords(char const *s, char c)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s[i])
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			n++;
	i++;
	return i;
}

char **ft_strstplit(char const *s, char c)
{
	char **table;

	table = (char **)malloc(sizeof(char*) * numberofwords(s,c));
	return table;
}
