/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:15:52 by saad              #+#    #+#             */
/*   Updated: 2025/09/18 11:27:33 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dest_len;
	size_t src_len;
	size_t i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	if (dstsize <= dest_len)
        return dstsize + src_len;
	i = 0;
	while (src[i] && (dest_len + i < dstsize - 1)) {
        dst[dest_len + i] = src[i];
        i++;
    }

    if (dest_len + i < dstsize)
        dst[dest_len + i] = '\0';

    return dest_len + src_len;
}

