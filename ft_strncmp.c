/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 04:19:39 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/26 13:25:12 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	int		i;

	ptr1 = (char*)s1;
	ptr2 = (char*)s2;
	i = 0;
	while(*ptr1 && *ptr2 && i < (int)n)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
		i++;
	}
	if (i == (int)n)
		return (0);
	return (*ptr1 - *ptr2);
}
