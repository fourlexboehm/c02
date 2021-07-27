int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	printf("%d",	ft_str_is_uppercase(""));
	printf("%d",	ft_str_is_uppercase("THISSTRINGISUPPERCASE"));
	printf("%d",	ft_str_is_uppercase("ThisStringIsNotUppercase"));
	printf("%d",	ft_str_is_uppercase("thisstringisnotuppercase238$"));
	printf("%d",	ft_str_is_uppercase("ThisStringIsNotLowercase"));
}
*/
