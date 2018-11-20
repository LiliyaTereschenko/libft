#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("lib %d\n", isalpha('s'));
	printf("my  %d\n", ft_isalpha('s'));

	printf("lib %d\n", isalpha('.'));
	printf("my  %d\n", ft_isalpha('.'));
		
	printf("lib %d\n", isalpha('A'));
	printf("my  %d\n", ft_isalpha('A'));
	return(0);	
}
