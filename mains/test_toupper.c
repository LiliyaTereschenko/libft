#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("lib %c\n", toupper('s'));
	printf("my  %c\n", ft_toupper('s'));

	printf("lib %c\n", toupper(' '));
	printf("my  %c\n", ft_toupper(' '));
	
	printf("lib %c\n", toupper(66));
	printf("my  %c\n", ft_toupper(66));
	
	printf("lib %c\n", toupper(114));
	printf("my  %c\n", ft_toupper(114));
	return(0);	
}
