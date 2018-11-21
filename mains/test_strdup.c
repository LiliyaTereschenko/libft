#include "libft.h"
#include <stdio.h>

int main()
{
	char s[100] = "ytherd4trgf";
	printf("%s\n", s);
	printf("my  %s\n", ft_strdup(s));
	printf("lib %s\n", strdup(s));
	return (0);
}
