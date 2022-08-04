/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stdin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:26:58 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 12:07:57 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	check_int(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i] != 0)
	{
		j = 0;
		if (argv[i][0] == '\0')
			ft_error("Error(NULL)");
		while (argv[i][j] != 0)
		{
			if (!ft_isdigit(argv[i][j]))
				ft_error("Error(No_int)");
			j++;
		}
		i++;
	}
}

static void	check_duplicate(char **str)
{
	int	col;
	int	i;
	int	j;

	col = 0;
	i = 0;
	while (str[col] != 0)
		col++;
	while (i < col)
	{
		j = i + 1;
		while (j < col)
		{	
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				ft_error("Error(duplicate number)");
			j++;
		}
		i++;
	}
}

char	**check_stdin(int argc, char **argv)
{
	char	**result;
	char	*temp;
	int		i;

	i = 1;
	temp = "";
	if (argc == 1)
		ft_error("Error(one arg)");
	else if (argc >= 2)
	{
		while (argv[i] != NULL)
			temp = ft_strjoin(temp, ft_strjoin(argv[i++], " "));
		result = ft_split(temp, ' ');
		free(temp);
		check_int(result);
		check_duplicate(result);
	}
	return (result);
}
