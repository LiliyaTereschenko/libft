/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 17:22:38 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/20 17:49:48 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*d;
	unsigned char	*s;
	size_t	i;

	i = 0;
	d = dest;
	s = (unsigned char *)src;
	while (s[i] != '\0' && i < n)
	{
		d[i] = s[i];
		if (s[i] == c)
		{
			d[i + 1] = '\0';
			return (d);
		}
		i++;
	}
	while (!s[i] && d[i] != '\0')
		i++;
	d[i] = '\0';
	return (d);
}
