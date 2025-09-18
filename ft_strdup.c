/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:13:32 by saad              #+#    #+#             */
/*   Updated: 2025/09/18 17:30:46 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strdup(const char *s)
{
	size_t	i;
	char *copy;
	size_t	len = ft_strlen(s);

	copy = malloc((len + 1) * sizeof(char));
	if(!copy)
		return NULL;
	i = 0;
	while(s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return copy;
}