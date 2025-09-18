/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 12:25:25 by saad              #+#    #+#             */
/*   Updated: 2025/09/18 13:34:31 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	const unsigned char *S1 = (const unsigned char *)s1;
	const unsigned char *S2 = (const unsigned char *)s2;
	if(n == 0)
		return 0;
	i = 0;
	while(i < n)
	{
		if(S1[i] != S2[i] || S2[i] == '\0' || S1[i] == '\0' )
			return S1[i] - S2[i];
		i++;
	}
	return 0;
}
