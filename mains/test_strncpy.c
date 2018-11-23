#include <stdio.h>
#include "libft.h"

int main()
{
	/*
	char s[15];
	char s1[15] = "lorem";
	char s2[15] ;
	char s3[15] = "lorem";
	
	printf ("%s",ft_strncpy(s, s1, 15));
	printf ("%c",'\n');
	printf ("%s",strncpy(s2, s3, 15));
*/
	char	*dest;
	dest = (char *)malloc(sizeof(*dest) * 15);
	memset(dest,0 , 15);
	memset(dest, 's', 13);
			printf("%s\n", strncpy(dest, "", 8));
	return (0);
}
