/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:41:30 by saad              #+#    #+#             */
/*   Updated: 2025/09/20 16:13:10 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_set(char c, char const *set)
{
	while(*set)
	{
		if(*set == c)
			return 1;
		set++;
	}
	return 0;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *ptr;
	size_t start;
	size_t end;
	
	if(!s1)
		return NULL;
	// if(!set)
	// 	return s1;
	start = 0;
	while(s1[start] && is_set(s1[start] , set))
		start++;
	end = ft_strlen(s1);
	while(end > start && is_set(s1[end - 1], set))
		end--;
	ptr = malloc(sizeof(char) * (end - start + 1));
	if(!ptr)
		return NULL;
	ft_memcmp(ptr, s1 + start, end - 1);
	ptr[end - start] = '\0';
	return ptr;
}
	
