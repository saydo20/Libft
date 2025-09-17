/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:37:44 by saad              #+#    #+#             */
/*   Updated: 2025/09/17 16:54:37 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t	i;
	
	if(!src && !dest)
	{
		return (dest);
	}
	d = (unsigned char *)dest;
	s = (const unsigned char *) src;
	i = 0;
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}