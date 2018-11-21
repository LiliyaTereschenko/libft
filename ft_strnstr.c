/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:49:06 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/21 14:35:41 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	flag;
	char	*s;

	i = 0;
	s = (char *)str;
	while (s[i] != '\0' && i < len)
	{
		j = 0;
		if (s[i] == to_find[j])
		{
			flag = i;
			while (s[i] == to_find[j] && i < len)
			{
				if (to_find[j + 1] == '\0')
					return (&s[flag]);
				i++;
				j++;
			}
			i = flag;
		}
		i++;
	}
	return (NULL);
}
