// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup 
// (man strdup(function is used to duplicate a string)).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);

#include <stdlib.h>
#include <stdio.h>

static int	ft_strlen(char *str)
{
	int	size = 0;
	while (*str)
	{
		str++;
		size++;
	}
	return (size);
}

char	*ft_strdup(char *src)
{
	int		i = 0;
	int		j = 0;
	int		len;
	char	*dest;

	len = ft_strlen(src);
	dest = malloc(sizeof(char) * (len + 1)); // ou malloc(64);
	while (src[i] && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	//printf("dest: %s\n", dest);
	return (dest);
}

int	main(void)
{
	char	*src = "Não aguento mais a 42!";
	ft_strdup(src);
	printf("source: %s\n", src);
}