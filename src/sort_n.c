/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:25:37 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 12:08:41 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

int	stack_min(t_stack *stack)
{
	t_node	*node;
	int		i;

	node = stack->top;
	i = node->data;
	while (node)
	{
		if (i > node->data)
			i = node->data;
		node = node->prev;
	}
	return (i);
}

void	stack_a_last_sort(t_stack *stack)
{
	int	i;

	i = get_min_ctrl_point(stack, stack_min(stack));
	while (i > 0)
	{
		stack_rotate(stack);
		i -= 1;
	}
	while (i < 0)
	{
		stack_rotate_rev(stack);
		i += 1;
	}
}

void	sorting_n(t_stack *stack_a, t_stack *stack_b, int *ctrl_p)
{
	while (stack_b->size)
	{
		ctrl_p[A] = 0;
		ctrl_p[B] = 0;
		control_point_init(stack_a, stack_b, ctrl_p);
		n_double_rotate(stack_a, stack_b, ctrl_p);
		n_rotate(stack_a, ctrl_p[A]);
		n_rotate(stack_b, ctrl_p[B]);
		stack_change(stack_b, stack_a);
	}
	stack_a_last_sort(stack_a);
}

void	sort_n(t_stack **stack_a, t_stack **stack_b)
{
	int	*num;
	int	ctrl_point[2];

	num = (int *)malloc(sizeof(int) * (*stack_a)->size);
	if (!num)
		ft_error("malloc error");
	stack_sort((*stack_a), num);
	quick_sort(num, 0, (*stack_a)->size - 1);
	if (check_stack_sort((*stack_a), num))
		return ;
	stack_split_3((*stack_a), (*stack_b), num);
	while ((*stack_a)->size > 3)
		stack_change((*stack_a), (*stack_b));
	if ((*stack_a)->size == 2)
		sort_2(stack_a);
	if ((*stack_a)->size == 3)
		sort_3(stack_a);
	sorting_n((*stack_a), (*stack_b), ctrl_point);
	free(num);
}
