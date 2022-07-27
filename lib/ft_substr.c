/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejin <sejin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 23:47:21 by sejin             #+#    #+#             */
/*   Updated: 2022/03/25 23:39:53 by sejin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    
    if (!s)
        return (NULL);
    if (ft_strlen(s) < start)
    	return (ft_strdup(""));
    if (!(substr = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    ft_strlcpy(substr, s + start, len + 1);
        return (substr); 
}