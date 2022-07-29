/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_controller.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:52:35 by seheo             #+#    #+#             */
/*   Updated: 2022/07/29 19:56:14 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../lib/libft.h"
#include <stdio.h>


void	top_swap(t_stack **stack, char c)
{
	t_node	*top_node;
	t_node	*prev_node;
	t_node	temp;
	
	top_node = (* stack)->top;
	prev_node = (* stack)->top->prev;	

	if (top_node && top_node->prev)
	{
		temp.data = prev_node->data;
		prev_node->data = top_node->data;
		top_node->data = temp.data;
		print_message(c);
	}
}

