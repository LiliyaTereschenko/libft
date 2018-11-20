#include "libft.h" 
#include <stdio.h>

int main (void)
{
	char src[15] = "aaaaa";
	char src2[15] = "aaaaa";

	char dest[15] = "11111";
	char dest2[15] = "11111";
	
	printf("dest  = :  %s\n", memcpy(dest, src, 5));
	printf("dest2 = :  %s\n", ft_memcpy(dest2, src2, 5));
	return (0);
}
