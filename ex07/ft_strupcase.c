char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int    main()
{
	char	str[13] = "Make me upper";
	printf("%s\n", ft_strupcase(str));
	printf("%s\n", ft_strupcase(str));
	printf("%s\n", ft_strupcase(str));
}
*/
