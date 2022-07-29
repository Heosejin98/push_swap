/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_link_stack_util.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:27:18 by seheo             #+#    #+#             */
/*   Updated: 2022/07/29 19:12:14 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../lib/libft.h"

int ft_is_empty(t_stack *stack)
{
    if(stack->size == 0)
        return (1);
    return (0);
}

void stack_init(char **num, t_stack *stack)
{
    int r_len;
    int i;

    r_len = 0;
    i = 0;
    while(num[r_len] != 0)
        r_len++;

    while(i < r_len)
    {
		ft_push(stack, ft_atoi(num[r_len - i - 1]));
        i++;
    }   
}


//지워야함 제출 전에
void printStack(t_stack *stack)
{
    int i;
    t_stack temp_stack = *stack;
    i = 0;

    while(i < temp_stack.size)
    {
        printf("stack[%d]: %d\n", i, temp_stack.top->data);
        temp_stack.top = temp_stack.top->prev;
        i++;
    }
    printf("\n");
}
