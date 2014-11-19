/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 05:24:16 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/18 05:26:28 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int isprint(int c)
{
	if (c >= 32 && c <= 126)
		return 1;
	return 0;
}