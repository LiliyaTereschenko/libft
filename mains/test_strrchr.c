#include <stdio.h>
#include "libft.h"

int main()
{
    char s[100]= "abc de fg d h";
	char c;
	
	printf("s = %s\n", s); 	
	c = 'd';
    printf("c = %c\n", c);
	printf ("%s\n",ft_strrchr(s, c));
    printf ("%s\n",strrchr(s, c));
   
	c = '\0';
	printf("c = term\n");
    printf ("%s\n",ft_strrchr(s, c));
	printf ("%s\n",strrchr(s, c));
	
	c = 'b';
	printf("c = %c\n", c);
	printf ("%s\n",ft_strrchr(s, c));
	printf ("%s\n",strrchr(s, c));
	
	c = 'm';
	printf("c = %c\n", c);
	printf ("%s\n",ft_strrchr(s, c));
	printf ("%s\n",strrchr(s, c));
	return (0);
}

