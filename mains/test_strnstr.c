#include "libft.h"
#include <stdio.h>
int main()
{
    char s[100]= "baabasssbb";
    char st[100] = "aba";
    printf ("%s\n",ft_strnstr(s, st, 5));
    printf ("%s\n",strnstr(s, st, 5));
    return (0);
}

