#include "libft.h"
#include <stdio.h>

int main()
{
	char s1[100] = "                ";
	printf("s1 = %s\n", s1);
	printf("%s\n", ft_strtrim(s1));
	return (0);
}
