/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:33:15 by seheo             #+#    #+#             */
/*   Updated: 2022/07/28 20:26:10 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../lib/libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    t_stack* stack_a;
	t_stack* stack_b;
    char **res;
	int i = 0;

    stack_a = ft_stack_create();
    stack_b = ft_stack_create();
    
	res = check_stdin(argc, argv);
	
	while(res[i] != 0)
	{
        printf("%s\n", res[i]);
		ft_push(stack_a, ft_atoi(res[i]));
        i++;
	}

    printf("stack check %d\n", ft_top(stack_a));
    ft_pop(stack_a);
    printf("stack check %d\n", ft_top(stack_a));
    printf("%d", stack_a->size);


}
