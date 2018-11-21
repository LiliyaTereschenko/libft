/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:23:19 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/21 17:30:46 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		flag;
	char	*s;

	i = 0;
	flag = -1;
	s = (char *)str;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			flag = i;
		i++;
	}
	if (flag >= 0)
		return (&s[flag]);
	if (c == '\0')
		return (&s[i]);
	return (NULL);
}
