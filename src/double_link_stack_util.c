/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_link_stack_util.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:27:18 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 12:20:06 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_is_empty(t_stack *stack)
{
	if (stack->size == 0)
		return (1);
	return (0);
}

int	stack_init(char **num, t_stack *stack)
{
	int	r_len;
	int	i;

	r_len = 0;
	i = 0;
	while (num[r_len] != 0)
		r_len++;
	while (i < r_len)
	{
		ft_push(stack, ft_atoi(num[r_len - i - 1]));
		i++;
	}
	return (r_len);
}
