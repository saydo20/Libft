/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:20:25 by saad              #+#    #+#             */
/*   Updated: 2025/09/19 13:38:40 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
	size_t s1_len;
	size_t s2_len;
	size_t i;
	char *join;

	if(!s1 || !s2)
		return NULL;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if(!join)
		return NULL;
	i = 0;
	while(i < s1_len)
	{
		join[i] = s1[i];
		i++;
	}
	i = 0;
	while(i < s2_len)
	{
		join[i + s1_len] = s2[i];
		i++;
	}
	join[i + s1_len] = '\0';
	return join;
}