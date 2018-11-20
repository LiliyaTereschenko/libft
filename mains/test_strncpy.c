#include <stdio.h>
#include "libft.h"

int main()
{
	char s[100]= "aaaaaaaaaaaaa";
	char s1[100] = "dsfgfgdfghdfhgfhgh";
	char s2[100]= "aaaaaaaaaaaaa";
	char s3[100] = "dsfgfgdfghdfhgfhgh";
	
	printf ("%s",ft_strncpy(s, s1, 5));
	printf ("%c",'\n');
	printf ("%s",strncpy(s2, s3, 5));

	return (0);
}
