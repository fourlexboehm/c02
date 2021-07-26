int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 0x20 || str[i] > 0x7e)
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
	printf("%d", ft_str_is_printable("THISSTRINGISUPPERCASE"));
	printf("%d", ft_str_is_printable("this is printable"));
	printf("%d", ft_str_is_printable("\b"));
}
*/
