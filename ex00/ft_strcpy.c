char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[59] = "Hello, world!\0";
	char dest[59];
	ft_strcpy(dest, src);
	printf("%s\n", dest);
}
*/
