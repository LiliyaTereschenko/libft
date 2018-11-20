#include "libft.h" 
#include <stdio.h>

int main (void)
{
	char src[15] = "aaa3a";
	char src2[15] = "aaa3a";

	char dest[15] = "22222222";
	char dest2[15] = "22222222";
	
	printf("dest  = :  %s\n", memccpy(dest, src, 51, 5));
	printf("dest2 = :  %s\n", ft_memccpy(dest2, src2, 51, 5));
	return (0);
}
