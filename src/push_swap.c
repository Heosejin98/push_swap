/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:33:15 by seheo             #+#    #+#             */
/*   Updated: 2022/07/29 20:41:39 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../lib/libft.h"

int main(int argc, char **argv)
{
    t_stack*    stack_a;
	t_stack*    stack_b;
    char        **res;

    stack_a = ft_stack_create();
    stack_b = ft_stack_create();
    
	res = check_stdin(argc, argv);
	stack_init(res, stack_a);
    
    
    printStack(stack_a);
    top_swap(&stack_a, "sa");
    printStack(stack_a);

    push_a(stack_a, stack_b);
    printf("a 배열\n");
    printStack(stack_a);
    printf("b 배열\n");
    printStack(stack_b);

}

