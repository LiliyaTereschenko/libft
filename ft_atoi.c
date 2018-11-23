/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 21:50:59 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/23 14:11:06 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int res;
	int negative;

	if (!str)
		return (0);
	res = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\v' ||
			*str == '\f' || *str == '\n')
		str++;
	negative = (*str == '-') ? 1 : 0;
	if (negative || *str == '+')
		str++;
	while (*str)
	{
		if ((*str < '0' || *str > '9'))
			break ;
		res = res * 10 + (*str - '0');
		str++;
	}
	if (negative)
		return (-res);
	else
		return (res);
}
