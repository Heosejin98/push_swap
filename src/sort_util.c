/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:54:45 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 12:08:45 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	*stack_sort(t_stack *stack, int *data)
{
	int		i;
	t_node	*top;

	i = 0;
	top = stack->top;
	while (i < stack->size)
	{
		data[i] = top->data;
		top = top->prev;
		i++;
	}
	quick_sort(data, 0, stack->size - 1);
	return (data);
}

int	check_stack_sort(t_stack *stack, int *num)
{
	int		size;
	int		i;
	t_node	*node;

	node = stack->top;
	i = 0;
	size = stack->size;
	while (i < size)
	{
		if (node->data != num[i])
			return (0);
		node = node->prev;
		i++;
	}
	return (1);
}
