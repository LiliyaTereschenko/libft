/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 21:50:59 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/26 16:10:13 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num(unsigned long long res, int neg, const char *s)
{
	int count;

	count = 0;
	while (*s <= '1' || *s >= '9')
		s++;
	while (ft_isdigit(*(s + count)))
		count++;
	if (count >= 19)
		return (neg == -1 ? 0 : -1);
	if (res > 9223372036854775807)
		return (neg == -1 ? 0 : -1);
	else
		return (res * neg);
}

int			ft_atoi(const char *s)
{
	int					is_neg;
	unsigned long long	n;

	is_neg = 1;
	n = 0;
	while (*s == ' ' || *s == '\t' || *s == '\r' || *s == '\v' ||
			*s == '\f' || *s == '\n')
		s++;
	if (*s == '+')
		s++;
	else if (*s == '-')
	{
		is_neg = -1;
		s++;
	}
	while (*s && ft_isdigit(*s))
		n = n * 10 + (*s++ - '0');
	return (get_num(n, is_neg, s));
}
