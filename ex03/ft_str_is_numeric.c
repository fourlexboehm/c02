int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		else
			i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_numeric("ABC DEjhsdhj"));
	printf("%d", ft_str_is_numeric("A82937283BC DEjhsdhj"));
	printf("%d", ft_str_is_numeric("919128192"));
	printf("%d", ft_str_is_numeric("99887125678"));
	printf("%d", ft_str_is_numeric("ABC DEjhsdhj"));
}
*/
