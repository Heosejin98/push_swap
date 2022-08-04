/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:08:32 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 12:08:33 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	swap_int(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	quick_sort(int *data, int start, int end)
{
	int	pivot;
	int	i;
	int	j;

	pivot = start;
	i = pivot + 1;
	j = end;
	if (start >= end)
		return ;
	while (i <= j)
	{
		while (i <= end && data[i] <= data[pivot])
			i++;
		while (j > start && data[j] >= data[pivot])
			j--;
		if (i > j)
			swap_int(&data[j], &data[pivot]);
		else
			swap_int(&data[i], &data[j]);
	}
	quick_sort(data, start, j);
	quick_sort(data, j + 1, end);
}
