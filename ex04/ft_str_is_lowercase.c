int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	printf("%d",	ft_str_is_lowercase(""));
	printf("%d",	ft_str_is_lowercase("thisstringislowercase"));
	printf("%d",	ft_str_is_lowercase("ThisStringIsNotLowercase"));
	printf("%d",	ft_str_is_lowercase("This String is not lowercase1"));
}
*/
