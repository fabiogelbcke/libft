/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 07:58:46 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/21 08:12:07 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	numtostr(char **strptr, int n, int size)
{
	char *str;
	int i;

	i = 0;
	str = *strptr;
	if (n < 0)
		str[i++] = '-';

}

char	*ft_itoa(int n)
{
	char *str;
	int size;
	int temp;

	size = 0;
	temp = n;
	if (n < 0)
	{
		size++;
		temp = temp * -1;
	}
	while (temp > 0)
	{
		temp = temp / 10;
		size++;
	}
	str = (char*)malloc(sizeof(char) * size + 1);
	if (!str)
		return NULL;
	numtostr(&str, n);
	return str;
}
