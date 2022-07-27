/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejin <sejin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:48:07 by sejin             #+#    #+#             */
/*   Updated: 2022/03/26 01:31:09 by sejin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *ptr, int val, size_t n)
{
    size_t  i;
    unsigned char *arr;

    arr = (unsigned char*)ptr;
    i = 0;
    while (i < n)
    {
        arr[i] = (unsigned char)val;
        i++;
    }
    return (arr);
}