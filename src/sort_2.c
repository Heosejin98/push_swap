/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:54:19 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 11:54:20 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_2(t_stack **stack_a)
{
	int	*num;

	num = (int *)malloc(sizeof(int) * (*stack_a)->size);
	if (!num)
		ft_error("malloc error");
	stack_sort(*stack_a, num);
	quick_sort(num, 0, (*stack_a)->size - 1);
	if ((*stack_a)->top->data == num[0] && (*stack_a)->bottom->data == num[1])
	{
		free(num);
		return ;
	}
	if ((*stack_a)->top->data == num[1])
		top_swap((*stack_a));
	free(num);
}

void	sort_2_desc(t_stack **stack_a)
{
	int	*num;

	num = (int *)malloc(sizeof(int) * (*stack_a)->size);
	if (!num)
		ft_error("malloc error");
	stack_sort(*stack_a, num);
	if ((*stack_a)->bottom->data == num[0] && (*stack_a)->top->data == num[1])
	{
		free(num);
		return ;
	}
	if ((*stack_a)->top->data == num[0])
		top_swap((*stack_a));
}
