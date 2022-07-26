/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:52:35 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 12:09:08 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	top_swap(t_stack *stack)
{
	t_node	*top_node;
	t_node	*prev_node;
	int		temp;
	int		type;

	type = stack->type;
	top_node = stack->top;
	prev_node = stack->top->prev;
	if (top_node && top_node->prev)
	{
		temp = prev_node->data;
		prev_node->data = top_node->data;
		top_node->data = temp;
		print_message("s", type);
	}
}

void	double_swap(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->type = NO_PRINT;
	stack_b->type = NO_PRINT;
	top_swap(stack_a);
	top_swap(stack_b);
	print_message("s", S);
	stack_a->type = A;
	stack_b->type = B;
}
