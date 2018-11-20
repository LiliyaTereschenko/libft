#include "libft.h" 
#include <stdio.h>

int main (void)
{
	unsigned char src[15]="03453";
	unsigned char src2[15]="03453";

	memset(src, '1', 10);
	printf("src:  %s\n",src);

	ft_memset(src2, '1', 10);
	printf("src2: %s\n",src2);
	return (0);
}
