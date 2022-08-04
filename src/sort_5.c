/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:54:31 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 11:54:32 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	sort_5_re(t_stack **stack_a, t_stack **stack_b, int *num)
{
	int	i;

	i = 0;
	while ((*stack_a)->size != 3)
	{
		if ((*stack_a)->top->data >= num[2])
			stack_rotate((*stack_a));
		else if ((*stack_a)->top->data < num[2])
			stack_change((*stack_a), (*stack_b));
	}
}

void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	int	*num;

	num = (int *)malloc(sizeof(int) * (*stack_a)->size);
	if (!num)
		ft_error("malloc error");
	stack_sort(*stack_a, num);
	quick_sort(num, 0, (*stack_a)->size - 1);
	if (check_stack_sort((*stack_a), num))
		return ;
	sort_5_re(stack_a, stack_b, num);
	sort_3(stack_a);
	sort_2_desc(stack_b);
	stack_change((*stack_b), (*stack_a));
	stack_change((*stack_b), (*stack_a));
	free(num);
}
