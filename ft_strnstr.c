/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:17:53 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/23 18:58:51 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	*ps1;
	char	*ps2;

	if (!*s2)
		return ((char *)s1);
	while (*s1 && len > 0)
	{
		if (*s1 == *s2)
		{
			ps1 = (char *)s1 + 1;
			ps2 = (char *)s2 + 1;
			while (*ps1 && *ps2 && *ps1 == *ps2 && len > 0)
			{
				++ps1;
				++ps2;
				len--;
			}
			if (!*ps2)
				return ((char *)s1);
		}
		s1++;
		len--;
	}
	return (NULL);
}
