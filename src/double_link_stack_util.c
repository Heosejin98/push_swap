/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_link_stack_util.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:27:18 by seheo             #+#    #+#             */
/*   Updated: 2022/07/28 21:37:52 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../lib/libft.h"

int ft_is_empty(t_node *node)
{
    if(node == NULL)
        return (1);
    return (0);
}

void stack_init(char **num, t_stack *stack)
{
    int r_len;
    int i;

    r_len = 0;
    i = 0;
    while(num[r_len] != 0)
        r_len++;

    while(i < r_len)
    {
		ft_push(stack, ft_atoi(num[r_len - i - 1]));
        i++;
    }
    
}