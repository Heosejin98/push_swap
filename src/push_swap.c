/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:33:15 by seheo             #+#    #+#             */
/*   Updated: 2022/07/29 18:03:36 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../lib/libft.h"

int main(int argc, char **argv)
{
    t_stack*    stack_a;
	t_stack*    stack_b;
    char        **res;
	int r_len = 0;

    stack_a = ft_stack_create();
    stack_b = ft_stack_create();
    
    printf("stack check %p\n", stack_a->bottom);
	res = check_stdin(argc, argv);
	stack_init(res, stack_a);
    
    
    printStack(stack_a);
    top_swap(&stack_a, 'a');
    printStack(stack_a);
    ft_pop(stack_a);
    printStack(stack_a);
    printf("%d", stack_a->size);

}

