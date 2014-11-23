/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 07:19:16 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/23 07:10:43 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_memdel(void **ap)
{
	if (!(*ap) || !ap)
		return;
	free(*ap);
	*ap = NULL;
}
