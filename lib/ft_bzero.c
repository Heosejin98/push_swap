/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejin <sejin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 00:19:15 by sejin             #+#    #+#             */
/*   Updated: 2022/03/26 02:31:11 by sejin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *b, size_t n)
{
    unsigned char   *dest;
    size_t          i;
    
    dest = b;
    i = 0;
    while(i++ < n)
        *dest++ = 0;
}