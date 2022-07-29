/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:14:21 by seheo             #+#    #+#             */
/*   Updated: 2022/07/29 20:44:10 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../lib/libft.h"

void    push_a(t_stack *out_stack, t_stack *in_stack)
{
    int out_put;

    if(ft_is_empty(out_stack))
        return ;
    out_put = out_stack->top->data;

    printf("test %d\n", out_put);
    ft_push(in_stack, out_put);
    ft_pop(out_stack);
    print_message("pa");
}


void    push_b(t_stack **out_stack, t_stack **in_stack)
{
	int out_put;

    if(ft_is_empty(out_stack))
        return ;
    out_put = out_stack->top->data;

    printf("test %d\n", out_put);
    ft_push(in_stack, out_put);
    ft_pop(out_stack);
    print_message("pb");
}
