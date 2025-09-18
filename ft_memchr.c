/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:20:34 by saad              #+#    #+#             */
/*   Updated: 2025/09/18 13:28:51 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char C;
	const unsigned char *S;

	C = (unsigned char)c;
	S = (const unsigned char *)s;
	i = 0;
	while(i < n)
	{
		if(S[i] == C)
			return (void *)&S[i];
		i++;
	}
	return NULL;
}