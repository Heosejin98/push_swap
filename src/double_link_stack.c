/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_link_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:03:45 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 12:08:10 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*ft_stack_create(int type)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		ft_error("malloc Error");
	stack->top = NULL;
	stack->bottom = NULL;
	stack->size = 0;
	stack->type = type;
	return (stack);
}

t_node	*ft_node_init(int num)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		ft_error("malloc Error");
	new_node->data = num;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

void	ft_push(t_stack *stack, int num)
{
	t_node	*new_node;
	t_node	*old_top;

	new_node = ft_node_init(num);
	if (ft_is_empty(stack))
	{
		stack->top = new_node;
		stack->bottom = new_node;
	}
	else
	{
		old_top = stack->top;
		old_top->next = new_node;
		new_node->prev = old_top;
		stack->top = new_node;
	}
	stack->size++;
}

void	ft_pop(t_stack *stack)
{
	t_node	*current_top;
	t_node	*new_top;

	current_top = stack->top;
	if (ft_is_empty(stack))
		return ;
	else if (stack->size > 1)
	{
		new_top = stack->top->prev;
		new_top->next = NULL;
		stack->top = new_top;
	}
	stack->size--;
	free(current_top);
}

t_node	*ft_top(t_stack *stack)
{
	return (stack->top);
}
