// Assignment name  : rev_print
// Expected files   : rev_print.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Escreva uma função que imprima uma sequência, mas na ordem inversa.
// Ela deve retornar seu parâmetro. Cuidado para que a string não seja
// modificável.

// char	*rev_print(char *str);

// Examples:

// $> ./rev_print "zaz" | cat -e
// zaz$
// $> ./rev_print "dub0 a POIL" | cat -e
// LIOP a 0bud$
// $> ./rev_print | cat -e
// $

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i] && str[i] != '\0')
		i++;
	return (i);
}

char	*rev_print(char *str)
{
	int	len = ft_strlen(str) - 1;

	while (str[len] && str[len] != '\0')
	{
		if (len >= 0)
			write(1, &str[len--], 1);
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (argv[1] && argv[1] != NULL)
			rev_print(argv[1]);
	}
	else
		write(1, "\n", 1);
	return (0);
}
