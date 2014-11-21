/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 14:26:39 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/21 03:54:59 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	change_number(int *num, int *factor, char *ptr)
{
	if (*ptr >= 48 && *ptr <= 57)
	{
		*num += (*ptr - 48) * (*factor);
		*factor = *factor * 10;
	}
	else
	{
		*factor = 1;
		*num = 0;
	}
}

int		ft_atoi(const char *str)
{
	int result;
	int factor;
	int length;
	char *strptr;

	factor = 1;
	result = 0;
	length = 0;
	strptr = (char*)str;
	while (*strptr)
	{
		strptr++;
		length++;
	}
	strptr--;
	while (length-- > 0)
	{
		if (length == 1 && *strptr == 45)
			result = result * -1;
		else
			change_number(&result, &factor, strptr);
		strptr--;
	}
	return (result);
}
