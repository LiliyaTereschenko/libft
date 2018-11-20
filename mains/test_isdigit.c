#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("lib %d\n", isdigit('s'));
	printf("my  %d\n", ft_isdigit('s'));

	printf("lib %d\n", isdigit('.'));
	printf("my  %d\n", ft_isdigit('.'));
		
	printf("lib %d\n", isdigit(12));
	printf("my  %d\n", ft_isdigit(12));

	  printf("lib %d\n", isdigit('9'));
	  printf("my  %d\n", ft_isdigit('9'));
	
	printf("lib %d\n", isdigit(9));
	printf("my  %d\n", ft_isdigit(9));
	return(0);	
}
