#include <stdio.h>
#include "libft.h"

int main()
{
    char s[100]= "abcdefgdh";
	char c = 'd';
    printf ("%s\n",ft_strchr(s, c));
    printf ("%s\n",strchr(s, c));
    return (0);
}

