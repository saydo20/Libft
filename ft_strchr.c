/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:58:02 by saad              #+#    #+#             */
/*   Updated: 2025/09/18 12:10:13 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    size_t i = 0;
    while (s[i])
    {
        if ((unsigned char)s[i] == (unsigned char)c)
            return (char *)&s[i];
        i++;
    }
    if ((unsigned char)c == '\0')
        return (char *)&s[i];
    return NULL;
}