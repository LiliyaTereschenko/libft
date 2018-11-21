#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("lib %c\n", tolower('s'));
	printf("my  %c\n", ft_tolower('s'));

	printf("lib %c\n", tolower('A'));
	printf("my  %c\n", ft_tolower('A'));
	
	printf("lib %c\n", tolower(118));
	printf("my  %c\n", ft_tolower(118));
	
	printf("lib %c\n", tolower('!'));
	printf("my  %c\n", ft_tolower('!'));
	
	return(0);	
}
