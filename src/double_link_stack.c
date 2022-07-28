/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_link_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:03:45 by seheo             #+#    #+#             */
/*   Updated: 2022/07/28 19:50:06 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack*   ft_stack_create()
{
    t_stack*   stack;

    stack = (t_stack *)malloc(sizeof(t_stack));
    if(!stack)
    {
        free(stack);
        ft_error("malloc Error");
    }
    stack -> top = NULL;
    stack -> size = 0;

    return (stack);
}

t_node *ft_node_init(int num) 
{
    t_node* new_node = (t_node*)malloc(sizeof(t_node));
    
    if(!new_node)
    {
        free(new_node);
        ft_error("malloc Error");
    }
    new_node->data = num;
    new_node->next = NULL;
    new_node->prev = NULL;
    return (new_node);
}


void ft_push(t_stack* stack, int num)
{
    t_node *new_node = ft_node_init(num);
    t_node *old_top;

    if(stack->top == NULL)
        stack->top = new_node;
    else  
    {
        old_top = stack->top;
        old_top->next = new_node;
        new_node->prev = old_top;
        stack->top = new_node;
    }
    stack->size++; 
}


void ft_pop(t_stack *stack)
{
    t_node *current_top = stack->top;
    t_node *new_top;

    if(ft_is_empty(current_top))
        return ;
    else
    {
        new_top = stack->top->prev;
        new_top->next = NULL;
        stack->top = new_top;
    }
    stack->size--;
    free(current_top);
}

int ft_top(t_stack* stack) 
{ 
    return (stack->top->data);
}