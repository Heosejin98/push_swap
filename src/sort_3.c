/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:54:25 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 11:54:27 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	sorting_3(t_stack *stack, int *num)
{
	if (stack->top->data == num[0] && stack->bottom->data == num[2])
		return ;
	if (stack->top->data == num[0])
	{
		top_swap(stack);
		stack_rotate(stack);
	}
	else if (stack->top->prev->data == num[0])
	{
		if (stack->top->data == num[2])
			stack_rotate(stack);
		else
			top_swap(stack);
	}
	else if (stack->bottom->data == num[0])
	{
		if (stack->top->data == num[2])
		{
			stack_rotate(stack);
			top_swap(stack);
		}
		else
			stack_rotate_rev(stack);
	}
}

void	sort_3(t_stack **stack_a)
{
	int	*num;

	num = (int *)malloc(sizeof(int) * (*stack_a)->size);
	if (!num)
		ft_error("malloc error");
	stack_sort(*stack_a, num);
	sorting_3((*stack_a), num);
	free(num);
}
