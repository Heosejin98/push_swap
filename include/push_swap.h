/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:39:54 by seheo             #+#    #+#             */
/*   Updated: 2022/07/28 19:25:41 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include    <unistd.h>
#include    <stdlib.h>
#include    <stdbool.h>

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
    t_node*	top; 
    int		size;//노드 갯수
}t_stack;

t_stack     *ft_stack_create();
t_node      *ft_node_init(int num);
int         ft_top(t_stack* stack);
void        ft_push(t_stack* stack, int num);
void        ft_pop(t_stack* stack);
int         ft_is_empty(t_node *node);

void	    ft_error(char *str);
char	    **check_stdin(int argc, char **argv);

#endif
