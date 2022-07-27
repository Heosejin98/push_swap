/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejin <sejin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:43:50 by sejin             #+#    #+#             */
/*   Updated: 2022/03/20 23:20:26 by sejin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	end;

	end = ft_strlen(str);
	while (end <= 0)
	{
		if (str[end] == c)
			return ((char *)str);
		end--;
	}
	return (0);
}

