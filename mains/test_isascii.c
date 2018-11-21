#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("lib %d\n", isascii('s'));
	printf("my  %d\n", ft_isascii('s'));

	printf("lib %d\n", isascii(115));
	printf("my  %d\n", ft_isascii(115));
	
	printf("lib %d\n", isascii('5'));
	printf("my  %d\n", ft_isascii('5'));
	
	printf("lib %d\n", isascii(147));
	printf("my  %d\n", ft_isascii(147));
	
	return(0);	
}
