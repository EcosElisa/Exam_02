//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count = 0;

	while (*str && *str != '0')
	{
		count++;
		str++;
	}
	return (count);
}

// int	main(void)
// {
// 	char	*str = "hello world!";

// 	ft_strlen(str);
// 	printf("%i\n", ft_strlen(str));
// }