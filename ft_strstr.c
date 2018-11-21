/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:17:53 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/21 14:58:41 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;
	int		flag;
	char	*s;

	i = 0;
	s = (char *)str;
	while (s[i] != '\0')
	{
		j = 0;
		if (s[i] == to_find[j])
		{
			flag = i;
			while (s[i] == to_find[j])
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
	return (0);
}
