#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("lib %d\n", isprint(' '));
	printf("my  %d\n", ft_isprint(' '));

	printf("lib %d\n", isprint('s'));
	printf("my  %d\n", ft_isprint('s'));

	printf("lib %d\n", isprint('\n'));
	printf("my  %d\n", ft_isprint('\n'));
	
	printf("lib %d\n", isprint(124));
	printf("my  %d\n", ft_isprint(124));
	
	printf("lib %d\n", isprint(127));
	printf("my  %d\n", ft_isprint(127));
	return(0);	
}
