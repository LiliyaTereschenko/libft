/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 17:22:38 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/23 16:48:23 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char			*d;
	char			*s;
	unsigned char	ch;

	d = (char *)dest;
	s = (char *)src;
	ch = c;
	while (n > 0)
	{
		if (*s == ch)
		{
			*d = *s;
			d++;
			return (d);
		}
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (NULL);
}
