/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:43:35 by seheo             #+#    #+#             */
/*   Updated: 2022/07/29 17:46:36 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../lib/libft.h"

void    print_message(char c)
{
    ft_putstr_fd("s", 1);
	ft_putchar_fd(c, 1);
	ft_putstr_fd("\n", 1);
}