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
    char    *str_base;
    char    str_upper[6];
    int        index;

    str_base = "heLl0";
    index = 0;
    while (index < 6)
    {
        str_upper[index] = str_base[index] + 0;
        index++;
    }
    ft_strupcase(&str_upper[0]);
    printf("should be normal    : %s\n", str_base);
    printf("should be upper case: %s\n", str_upper);
}

*/
