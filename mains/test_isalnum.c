#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("lib %d\n", isalnum('s'));
	printf("my  %d\n", ft_isalnum('s'));

	printf("lib %d\n", isalnum(9));
	printf("my  %d\n", ft_isalnum(9));
	
	printf("lib %d\n", isalnum('H'));
	    printf("my  %d\n", ft_isalnum('H'));
	
	printf("lib %d\n", isalnum(' '));
	    printf("my  %d\n", ft_isalnum(' '));
	
	printf("lib %d\n", isalnum('0'));
	    printf("my  %d\n", ft_isalnum('0'));
	return(0);	
}
