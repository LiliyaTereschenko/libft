#include "libft.h" 
#include <stdio.h>

int main (void)
{
	char src[15] = "222222222222";
	char src2[15] = "222222222222";

	bzero(src, 10);
	printf("src:  %s\n",src);

	ft_bzero(src2, 10);
	printf("src2: %s\n",src2);
	return (0);
}
