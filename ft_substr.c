/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:39:45 by saad              #+#    #+#             */
/*   Updated: 2025/09/19 13:15:35 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t s_len;
	char *ptr;
	size_t i;

	if(!s)
		return NULL;
	s_len = ft_strlen(s);
	if(start >= s_len)
		return ft_strdup("");
	if(len > s_len - start)
		len = s_len - start;
	ptr = malloc(len + 1);
	if(!ptr)
		return NULL;
	i = 0;
	while(i < len)
	{
		ptr[i] = s[i + start];
		i++;
	}
	ptr[i] = '\0';
	return ptr;
}