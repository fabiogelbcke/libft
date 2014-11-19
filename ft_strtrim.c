/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 09:22:09 by fschuber          #+#    #+#             */
/*   Updated: 2014/11/19 09:33:15 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t getlen(char const *s)
{
	size_t len;
	int i;

	len = 0;
	i = 0;
	while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while(s[i++])
		len++;
	if (len == 0)
		return 0;
	i--;
	while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i--;
		len--;
	}

}

char *ft_strtrim(char const *s)
{
	char *ret;
	size_t size;
	int startindex;
	int i;

	size = getlen(s);
	ret = malloc(sizeof(char) * (size + 1));
	while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	startindex = i;
	while(i - startindex >= size)
		ret[i - startindex] = s[i];
	return ret;
}
