#include "libft.h"
#include <stdio.h>

int main()
{
	char s1[100] = "123etgberf";
	printf("s = %s\n", s1);
	printf("%d  -  %d\n", ft_atoi(s1), atoi(s1));

	char s2[100] = "     -123etgberf";
	printf("s = %s\n", s2);
	printf("%d  -  %d\n", atoi(s2), ft_atoi(s2));
	
	char s3[100] = "     etgberf";
	printf("s = %s\n", s3);
	printf("%d  -  %d\n", ft_atoi(s3), atoi(s3));

	char s4[100] = "    -etgberf";
	printf("s = %s\n", s4);
	printf("%d  -  %d\n", ft_atoi(s4), atoi(s4));
	
	char s5[100] = "    +etgberf";
	printf("s = %s\n", s5);
	printf("%d  -  %d\n", ft_atoi(s5), atoi(s5));

	char s6[100] = "    +045etgberf";
	printf("s = %s\n", s6);
	printf("%d  -  %d\n", ft_atoi(s6), atoi(s6));
	return (0);
}
