/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:47:20 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 12:08:55 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	stack_rotate(t_stack *stack)
{
	int		top_data;
	int		i;
	int		type;
	t_node	*cursor;

	if (!stack)
		return ;
	type = stack->type;
	i = 0;
	cursor = stack->top;
	top_data = cursor->data;
	while (i < stack->size - 1)
	{
		cursor->data = cursor->prev->data;
		cursor = cursor->prev;
		i++;
	}
	cursor->data = top_data;
	print_message("r", type);
}

void	double_rotate(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->type = NO_PRINT;
	stack_b->type = NO_PRINT;
	stack_rotate(stack_a);
	stack_rotate(stack_b);
	print_message("r", R);
	stack_a->type = A;
	stack_b->type = B;
}
