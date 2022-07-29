/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:39:54 by seheo             #+#    #+#             */
/*   Updated: 2022/07/29 20:40:18 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include    <unistd.h>
#include    <stdlib.h>

//제출 전에 지울 것
#include <stdio.h>


//스택에 하나씩 쌓일 데이터 정의
typedef struct s_stack_node
{
	int		              data;
    struct  s_stack_node* next;
    struct  s_stack_node* prev;
}t_node;

//스택의 정보를 정의
typedef struct s_dlinked_list_stack
{
    t_node  *top; 
    t_node  *bottom;
    int		size;//노드 갯수ß
}t_stack;

t_stack     *ft_stack_create();
t_node      *ft_node_init(int num);
t_node      *ft_top(t_stack *stack);
void        ft_push(t_stack *stack, int num);
void        ft_pop(t_stack *stack);
int         ft_is_empty(t_stack *stack);
void        stack_init(char **num, t_stack *stack);

void	    top_swap(t_stack **top_node, char *c);
void	    double_swap(t_stack **stack_a, t_stack **stack_b);
void        push_a(t_stack *out_stack, t_stack *in_stack);

void	    ft_error(char *str);
void        print_message(char *c1);
char	    **check_stdin(int argc, char **argv);

//제출 전에 지울 것
void printStack(t_stack *stack);

#endif
