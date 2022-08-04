/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate_reverse.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:46:08 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 12:24:19 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	stack_rotate_rev(t_stack *stack)
{
	int		i;
	int		bottom_data;
	int		type;
	t_node	*cursor;

	if (!stack)
		return ;
	i = 0;
	bottom_data = stack->bottom->data;
	cursor = stack->bottom;
	type = stack->type;
	while (i < stack->size - 1)
	{
		cursor->data = cursor->next->data;
		cursor = cursor->next;
		i++;
	}
	stack->top->data = bottom_data;
	print_message("rr", type);
}

void	double_rotate_rev(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->type = NO_PRINT;
	stack_b->type = NO_PRINT;
	stack_rotate_rev(stack_a);
	stack_rotate_rev(stack_b);
	print_message("rr", R);
	stack_a->type = A;
	stack_b->type = B;
}
