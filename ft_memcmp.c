/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:54:24 by saad              #+#    #+#             */
/*   Updated: 2025/09/18 13:58:50 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
    const unsigned char *S1 = (const unsigned char *)s1;
    const unsigned char *S2 = (const unsigned char *)s2;

    i = 0;
    while (i < n)
    {
        if (S1[i] != S2[i])
            return (S1[i] - S2[i]);
        i++;
	}
    return 0;
}