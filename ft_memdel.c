/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 07:19:16 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/21 07:20:58 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_memdel(void **ap)
{
	if (!(*ap))
		return;
	free(*ap);
	*ap = NULL;
}