/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_point.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:53:46 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 11:58:56 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_mid_ctrl_point(t_stack *stack_a, int b_top)
{
	int		result;
	t_node	*node;

	result = 1;
	node = stack_a->top;
	while (node->prev)
	{
		if (b_top > node->data && b_top < node->prev->data)
			break ;
		result++;
		node = node->prev;
	}
	if (result >= (stack_a->size + 1) / 2)
		result = (stack_a->size - result) * -1;
	return (result);
}

int	get_max_ctrl_point(t_stack *stack_a, int max)
{
	int			result;
	int			temp;
	t_node		*node;

	temp = 0;
	result = 0;
	node = stack_a->top;
	while (node)
	{
		temp = node->data;
		if (temp == max)
			break ;
		result++;
		node = node->prev;
	}
	result++;
	if (result >= (stack_a->size + 1) / 2)
		result = (stack_a->size - result) * -1;
	return (result);
}

int	get_min_ctrl_point(t_stack *stack_a, int min)
{
	int		result;
	int		temp;
	t_node	*node;

	result = 0;
	temp = 0;
	node = stack_a->top;
	while (result < stack_a->size)
	{
		temp = node->data;
		if (temp == min)
			break ;
		result++;
		node = node->prev;
	}
	if (result >= (stack_a->size + 1) / 2)
		result = (stack_a->size - result) * -1;
	return (result);
}

int	get_control_point(int b_top_data, t_stack *stack_a)
{
	int	result;
	int	*sort_a;

	sort_a = (int *)malloc(sizeof(int) * stack_a->size);
	if (!sort_a)
		ft_error("malloc Error");
	stack_sort(stack_a, sort_a);
	quick_sort(sort_a, 0, stack_a->size - 1);
	if (b_top_data < sort_a[0])
		result = get_min_ctrl_point(stack_a, sort_a[0]);
	else if (b_top_data > sort_a[stack_a->size - 1])
		result = get_max_ctrl_point(stack_a, sort_a[stack_a->size - 1]);
	else
		result = get_mid_ctrl_point(stack_a, b_top_data);
	free(sort_a);
	return (result);
}

void	control_point_init(t_stack *stack_a, t_stack *stack_b, int *ctrl_point)
{
	int		temp_ctrl_p[2];
	int		i;
	t_node	*node;

	i = 0;
	node = stack_b->top;
	while (i < stack_b->size)
	{
		temp_ctrl_p[A] = get_control_point(node->data, stack_a);
		if (i >= (stack_b->size + 1) / 2)
			temp_ctrl_p[B] = (stack_b->size - i) * -1;
		else
			temp_ctrl_p[B] = i;
		if (i == 0 || ft_get_bigger(ctrl_point, temp_ctrl_p))
		{
			ctrl_point[A] = temp_ctrl_p[A];
			ctrl_point[B] = temp_ctrl_p[B];
		}
		node = node->prev;
		i++;
	}
}
