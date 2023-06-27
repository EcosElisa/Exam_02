#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i = 0;

	while (src[i] && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	// printf("src: %s\n", src);
	// printf("dest: %s\n", dest);
	return (dest);
}

// int	main(void)
// {
// 	char	*str = "teste";
// 	char	dest[1000];
// 	ft_strcpy(dest, str);
// }