int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",	ft_str_is_alpha("ABC DEjhsdhj"));

	printf("%d",	ft_str_is_alpha("ABC^DEjhsdhj"));
	printf("%d",	ft_str_is_alpha("ABCDEjhsdhj"));
	printf("%d",	ft_str_is_alpha("ABCjdjksdosdnkDEjhsdhj"));
	printf("%d",	ft_str_is_alpha("sjdksdjHDJ8Djs"));
	printf("%d",	ft_str_is_alpha("A#@&*@#&*sdhj"));
}
*/
