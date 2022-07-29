/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:52:35 by seheo             #+#    #+#             */
/*   Updated: 2022/07/29 20:30:13 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../lib/libft.h"

void	top_swap(t_stack **stack, char *s)
{
	t_node	*top_node;
	t_node	*prev_node;
	int		temp;
	
	top_node = (* stack)->top;
	prev_node = (* stack)->top->prev;	

	if (top_node && top_node->prev)
	{
		temp = prev_node->data;
		prev_node->data = top_node->data;
		top_node->data = temp;
		if(ft_strcmp(s, "no") != 1)
			print_message(s);
	}
}

void	double_swap(t_stack **stack_a, t_stack **stack_b)
{
	top_swap(stack_a, "no");
	top_swap(stack_b, "no");
	print_message("ss");
}


