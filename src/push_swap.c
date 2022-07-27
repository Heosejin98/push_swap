/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:33:15 by seheo             #+#    #+#             */
/*   Updated: 2022/07/27 14:26:39 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../lib/libft.h"
#include <stdio.h>

int ft_col_len(char **argv)
{
    int len;
    len = 0;

    while (argv[len] != NULL)
        len++;
    return (len);
}

void ft_check_stdin(int argc, char **argv)
{
    int err;
    int j;

    j = 0;
    i = 1;
    while(argv[i] != NULL)
    {
        j = 0;
        while(argv[i][j] != '\0')
        {
            if(!ft_isdigit(argv[i][j]))
                exit(0);
            j++;
        }
        i++;
    }
}



int main(int argc, char **argv)
{
    //스택 1
    //스택 2
    int i = 0;
    
  
   if(argc > 3)
   {
        printf("asd");
   }
}