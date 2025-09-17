/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 17:02:06 by saad              #+#    #+#             */
/*   Updated: 2025/09/17 17:02:07 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <stdio.h>
#include "libft.h"

int main(void) {
	char src[] = "hello world";
	ft_memmove(src, src + 5, 5 * sizeof(char));
	printf("%s", src);
    return 0;
}