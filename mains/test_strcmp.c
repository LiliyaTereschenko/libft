#include <stdio.h>
#include "libft.h"

int main()
{
    char s1[100]= "hchckkshchckhso";
    char s2[100] = "hck";
	printf ("s1 = %s; s2 = %s\n", s1, s2);
    printf ("%d\n",ft_strcmp(s1, s2));
    printf ("%d\n",strcmp(s1, s2));
  	
	char s3[100]= "";
	char s4[100] = "";
	printf ("s1 = %s; s2 = %s (empty str)\n", s3, s4);
	printf ("%d\n",ft_strcmp(s3, s4));
	printf ("%d\n",strcmp(s3, s4));

	char s5[100]= "12";
	char s6[100] = "12";
	printf ("s1 = %s; s2 = %s\n", s5, s6);
	printf ("%d\n",ft_strcmp(s5, s6));
	printf ("%d\n",strcmp(s5, s6));

	char s9[100]= "1234";
	char s10[100] = "12";
	printf ("s1 = %s; s2 = %s\n", s9, s10);
	printf ("%d\n",ft_strcmp(s9, s10));
	printf ("%d\n",strcmp(s9, s10));

	char s7[100]= "\0";
	char s8[100] = "\0";
	printf ("s1 = %s; s2 = %s (term)\n", s7, s8);
	printf ("%d\n",ft_strcmp(s7, s8));
	printf ("%d\n",strcmp(s7, s8));
  	return (0);
}

