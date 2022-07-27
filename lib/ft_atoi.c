/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejin <sejin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 22:57:36 by sejin             #+#    #+#             */
/*   Updated: 2022/03/26 02:15:46 by sejin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *s)
{
    unsigned int	i;
    int 			neg;

    i = 0;
    neg = 0;
    while (*s == '\t' || *s == '\n' ||
        *s == '\v' || *s == '\f' || *s == '\r' ||
        *s == ' ')
        s++;
    if (*s == '-' || *s == '+')
    {
        if (*s == '-')
            neg++;
        s++;
    }
    while (*s >= '0' && *s <= '9')
    {
        i = i * 10 + (*s - 48);
        s++;
    }
    if (neg % 2 != 0)
        i = i * -1;
    return (i);
}