/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stdin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:26:58 by seheo             #+#    #+#             */
/*   Updated: 2022/07/28 19:49:32 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../lib/libft.h"

static void check_int(char **argv)
{
	int i;
	int j;

	i = 0;
	while(argv[0] != 0)
	{
		j = 0;
		if(argv[i][0] == '\0')
			ft_error("Error(NULL)");
		while(argv[i][j] != 0)
		{
			if(!ft_isdigit(argv[i][j]))
				ft_error("Error(No_int)");
			j++;			
		}
		i++;
	}
}

static void check_duplicate(char **str)
{
	int col;
	int i;
	int j;

	col = 0;
	i = 0;
	while(str[col] != 0)
		col++;

	while(i < col)
	{
		j = i + 1;
		while(j < col)
		{	
			if(ft_strcmp(str[i], str[j]) == 1)
				ft_error("Error(duplicate number)");
			j++;
		}
		i++;
	}
}

char	**check_stdin(int argc, char **argv)
{
	char	**result;

	if (argc == 1)
		ft_error("Error(one arg)");
	else if (argc == 2)
	{
		check_int(argv);
		result = ft_split(argv[1], ' ');
		check_duplicate(result);
	}
	else if (argc >= 3)
	{
		argv++;
		check_int(argv);
		check_duplicate(argv);
		return (argv);
	}
	return (result);
}




