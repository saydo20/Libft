#include <string.h> 
#include <stdio.h>
#include "libft.h"

int main(void) {
	char src[] = "hello world";
	ft_memmove(src, src + 5, 5 * sizeof(char));
	printf("%s", src);
    return 0;
}