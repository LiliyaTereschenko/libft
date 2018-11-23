#include "libft.h" 
#include <stdio.h>

int main (void)
{
	char src[30] = "zyxwvutsrqponmlkjihgfedcba";
	char src2[30] = "zyxwvutsrqponmlkjihgfedcba";
	char dest[30]  = "jjjjjjjjjjjjjjjjjjjjjjjjjjjjj\0";
	char dest2[30] = "jjjjjjjjjjjjjjjjjjjjjjjjjjjjj\0";
	
	printf("dest  = :  %s\n", memccpy(dest, src, 'r', 20));
	printf("dest2 = :  %s\n", ft_memccpy(dest2, src2, 'r', 20));
	
	char src3[30] = "zyxwvuzyxwvu";
	char src4[30] = "zyxwvuzyxwvu";
	char dest3[30] = "jjjjjjjjjjjjjjjjjjjjjjjjjjjjj\0";
	char dest4[30] = "jjjjjjjjjjjjjjjjjjjjjjjjjjjjj\0";
	printf("dest  = :  %s\n", memccpy(dest3, src3, 'x', 20));
	printf("dest2 = :  %s\n", ft_memccpy(dest4, src4, 'x', 20));
	return (0);
}
