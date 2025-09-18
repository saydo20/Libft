/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:06:12 by saad              #+#    #+#             */
/*   Updated: 2025/09/18 16:25:00 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if(needle[0] == '\0')
		return (char *)haystack;
	i = 0;
	while(i < n && haystack[i])
	{
		j = 0;
		while(haystack[i + j] && haystack[i + j] == needle[j] && i + j < n)
		{
			j++;
		}
		if(needle[j] == '\0')
				return (char *)&haystack[i];
		i++;
	}
	return NULL;
}