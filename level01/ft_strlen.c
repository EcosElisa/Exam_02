//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i] && str[i] != '0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	*str = "hello world!";

// 	ft_strlen(str);
// 	printf("%i\n", ft_strlen(str));
// }