/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:36:50 by saad              #+#    #+#             */
/*   Updated: 2025/09/19 12:49:13 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_calloc(size_t nmemb, size_t size)
{
	size_t total;
	void *ptr;

	total = nmemb * size;
	if(nmemb != 0 && total / nmemb != size) 
		return NULL;
	ptr = malloc(total);
	if(!ptr)
		return NULL;
	ft_bzero(ptr, total);
	return ptr;
}