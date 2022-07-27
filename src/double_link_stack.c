/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_link_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:03:45 by seheo             #+#    #+#             */
/*   Updated: 2022/07/27 11:03:46 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//스택 생성
t_stack*   ft_stack_create()
{
    t_stack*   stack;

    stack = (t_stack *)malloc(sizeof(t_stack));
    if(!stack)
        return ; //오류메시지 출력으로 바꾸기
    stack -> top = NULL;
    stack -> size = 0;

    return (stack);
}


void ft_push(t_stack* stack, int num)
{
    t_node *new_node = (t_node *)malloc(sizeof(t_node));
    if(!new_node)
        return ;
    t_node *old_top;

    if(stack->top == NULL)
        stack->top = new_node;
    else  
    {
        old_top = stack->top;
        old_top->next = new_node;   //옛날꺼 -> 새거
        new_node->prev = old_top;   //엣날꺼 <- 새거 
        stack->top = new_node;       //top
    }
    //리스트 노드 갯수를 추가
    list->size++; 
}

//
void ft_pop(t_stack* stack)
{
    t_node *current_top = stack->top;
    t_node new_top;

    if(ft_is_empty(current_top))
        return ;
    else
    {
        new_top = stack->top->prev;
        new_top->next= NULL;
        stack->top = new_top;
    }
    stack->size--;
    free(current_top->date);
    free(current_top);
}