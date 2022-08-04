/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:43:35 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 12:08:17 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_message(char *s, int type)
{
	char	s_type[2];
	char	*result;

	if (type == A)
		s_type[0] = 'a';
	else if (type == B)
		s_type[0] = 'b';
	else if (type == R)
		s_type[0] = 'r';
	else if (type == S)
		s_type[0] = 's';
	else
		return ;
	s_type[1] = 0;
	result = ft_strjoin(s, s_type);
	ft_putendl_fd(result, 1);
	free(result);
}
