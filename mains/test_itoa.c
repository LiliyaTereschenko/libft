#include "libft.h"
#include <stdio.h>

int main()
{
	printf("%s\n", ft_itoa(145));
	printf("%s\n", ft_itoa(-14345));
	printf("%s\n", ft_itoa(+145));
	printf("%s\n", ft_itoa(145));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-0));
	printf("%s\n", ft_itoa(-2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	return (0);
}
