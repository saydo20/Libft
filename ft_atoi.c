/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:31:57 by saad              #+#    #+#             */
/*   Updated: 2025/09/20 16:53:46 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_atoi(const char *str)
{
	size_t	i;
	long	result;
	int sign;

	i = 0;
	sign = 1;
	result = 0;

	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		if (sign == 1 && result > 2147483647)
            return 2147483647;
        if (sign == -1 && result > 2147483648)
            return -2147483648;
		i++;
	}
	return (int)(result * sign);
}