/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 04:19:39 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/18 04:24:28 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int strncmp(const char *s1, const char *s2, size_t n)
{
	char *ptr1;
	char *ptr2;
	int i;

	ptr1 = s1;
	ptr2 = s2;
	i = 0;
	while(*ptr1 && *ptr2 && i < 0)
	{
		if (*ptr1 != *ptr2)
			return ptr1-ptr2;
		ptr1++;
		ptr2++;
		i++;
	}
	return ptr1-ptr2;
}
