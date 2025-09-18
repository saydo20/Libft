/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 12:16:51 by saad              #+#    #+#             */
/*   Updated: 2025/09/18 12:20:43 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
	size_t i = 0;
	char *a = NULL;
    while (s[i])
    {
        if ((unsigned char)s[i] == (unsigned char)c)
            a = (char *)&s[i];
        i++;
    }
    if ((unsigned char)c == '\0')
        return (char *)&s[i];
    return a;
}