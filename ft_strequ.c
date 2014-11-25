/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 08:46:33 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/25 13:54:53 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (!s1 || !s2)
		return 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return 0;
		i ++;
	}
	if (s1[i] || s2[i])
		return 0;
	return 1;
}
