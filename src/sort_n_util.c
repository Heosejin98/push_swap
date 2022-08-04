/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_n_util.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:54:37 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 11:54:38 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	stack_split_3(t_stack *stack_a, t_stack *stack_b, int *num)
{
	int	i;
	int	pivot[2];
	int	data;

	pivot[SMALL] = num[stack_a->size / 3];
	pivot[BIG] = num[stack_a->size * 2 / 3];
	i = stack_a->size;
	data = stack_a->top->data;
	while (i)
	{
		if (data >= pivot[BIG])
		{
			stack_rotate(stack_a);
		}
		else
		{
			stack_change(stack_a, stack_b);
			if (data < pivot[SMALL])
				stack_rotate(stack_b);
		}
		data = stack_a->top->data;
		i--;
	}
}

int	ft_get_bigger(int *ctrl_p, int *temp_p)
{
	int	copy_ctrl[2];
	int	copy_temp[2];
	int	i;

	i = 0;
	while (i < 2)
	{
		if (ctrl_p[i] < 0)
			copy_ctrl[i] = ctrl_p[i] * -1;
		else
			copy_ctrl[i] = ctrl_p[i];
		if (temp_p[i] < 0)
			copy_temp[i] = temp_p[i] * -1;
		else
			copy_temp[i] = temp_p[i];
		i++;
	}
	if (copy_ctrl[A] + copy_ctrl[B] > copy_temp[A] + copy_temp[B])
		return (1);
	else
		return (0);
}

void	n_double_rotate(t_stack *stack_a, t_stack *stack_b, int *ctrl_p)
{
	while (ctrl_p[A] && ctrl_p[B] && (0 < ctrl_p[A] && 0 < ctrl_p[B]))
	{
		double_rotate(stack_a, stack_b);
		ctrl_p[A] = ctrl_p[A] - 1;
		ctrl_p[B] = ctrl_p[B] - 1;
	}
	while (ctrl_p[A] && ctrl_p[B] && (0 > ctrl_p[A] && 0 > ctrl_p[B]))
	{
		double_rotate_rev(stack_a, stack_b);
		ctrl_p[A] = ctrl_p[A] + 1;
		ctrl_p[B] = ctrl_p[B] + 1;
	}
}

void	n_rotate(t_stack *stack, int ctrl_point)
{
	while (ctrl_point)
	{
		if (ctrl_point > 0)
		{
			stack_rotate(stack);
			ctrl_point--;
		}
		else
		{
			stack_rotate_rev(stack);
			ctrl_point++;
		}
	}
}
