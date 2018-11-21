#include <stdio.h>
#include "libft.h"

int main()
{
	char s1[100] = "LKNBLF";
	char s2[100] = "111";
	char s3[100] = "pgi";
	char s4[100] = "fefefefe";

	char s5[100] = "LKNBLF";
	char s6[100] = "111";
	char s7[100] = "pgi";
	char s8[100] = "fefefefe";

	printf("%zu\n", ft_strlcat(s1, s2, 16));
	printf("%s\n", s1);
	printf("%zu\n", ft_strlcat(s3, s4, 8));
	printf("%s\n", s3);
	printf("%zu\n", strlcat(s5, s6, 16));
	printf("%s\n", s5);
	printf("%zu\n", strlcat(s7, s8, 8));
	printf("%s\n", s7);
	return (0);
}
