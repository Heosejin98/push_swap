/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:33:15 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 12:36:43 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**res;
	int		num_col;

	stack_a = ft_stack_create(A);
	stack_b = ft_stack_create(B);
	res = check_stdin(argc, argv);
	num_col = stack_init(res, stack_a);
	if (num_col == 2)
		sort_2(&stack_a);
	else if (num_col == 3)
		sort_3(&stack_a);
	else if (num_col == 5)
		sort_5(&stack_a, &stack_b);
	else if (num_col >= 5)
		sort_n(&stack_a, &stack_b);
	free(res);
}
