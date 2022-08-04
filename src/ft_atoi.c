/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:53:58 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 11:53:59 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_space(const char s)
{
	if (s == '\t' || s == '\n'
		|| s == '\v' || s == '\f' || s == '\r'
		|| s == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *s)
{
	int			i;
	int			sign;
	long long	n;

	i = 0;
	sign = 1;
	n = 0;
	while (check_space(s[i]))
		i++;
	if (s[i] == '-')
		sign *= -1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		if (n * sign > 2147483647)
			ft_error("Error(overflow)");
		else if (n * sign < -2147483648)
			ft_error("Error(underflow)");
		else
			n = n * 10 + (s[i] - '0');
		i++;
	}
	return (n * sign);
}
