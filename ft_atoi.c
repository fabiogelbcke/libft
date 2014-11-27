/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 14:26:39 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/27 18:02:37 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	char		*ptr;
	long int	num;
	long int	factor;
	int			isneg;

	if (!str)
		return 0;
	ptr = (char*)str;
	num = 0;
	factor = 1;
	isneg = 1;
	while (*ptr == '\n' || *ptr == ' ' || *ptr == '\v' ||
				*ptr == '\t' || *ptr == '\r' || *ptr == '\f')
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			isneg = -1;
		ptr++;
	}
	while(*ptr >= 48 && *ptr <= 57)
		ptr++;
	ptr--;
	while(*ptr >= 48 && *ptr <= 57)
	{
		num += (*ptr - 48) * factor;
		factor = factor * 10;
		ptr--;
	}
	num = num * isneg;
	return num;
}
