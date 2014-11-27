/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 09:22:09 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/27 21:38:04 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

static int	getlen(char const *s)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while(s[i++])
		len++;
	if (len == 0)
		return (0);
	i--;
	i--;
	while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i--;
		len--;
	}
	return (len);
}

char		*ft_strtrim(char const *s)
{
	char	*ret;
	int		size;
	int		startindex;
	int		i;

	i = 0;
	size = getlen(s);
	ret = (char*)malloc(sizeof(char) * (size + 1));
	if (!ret || !s)
		return (NULL);
	while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	startindex = i;
	while(i - startindex < size)
	{
		ret[i - startindex] = s[i];
		i++;
	}
	ret[i - startindex] = '\0';
	return (ret);
}
