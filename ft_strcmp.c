/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 04:17:28 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/18 04:22:48 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(const char *s1, const char *s2)
{
	char *ptr1;
	char *ptr2;

	ptr1 = s1;
	ptr2 = s2;
	while(*ptr1 && *ptr2)
	{
		if (*ptr1 != *ptr2)
			return ptr1-ptr2;
		ptr1++;
		ptr2++;
	}
	return ptr1-ptr2;
}