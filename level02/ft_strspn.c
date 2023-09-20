// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function 
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);

// strspn() - calcula o comprimento do segmento inicial de uma string
// que contém apenas caracteres presentes em outra string.

// str1 - string que desejamos analisar.
// str2 - string contendo os caracteres permitidos.

// A função percorre a string str1 da esquerda para a direita, verificando
// se cada caractere está presente em str2. Ela retorna o comprimento do
// segmento inicial de str1 que contém apenas caracteres de str2. Quando
// encontra um caractere que não está presente em str2, a função interrompe
// a contagem e retorna o valor atual do comprimento.

// #include <stdio.h>
// #include <string.h>

char	*ft_strchr(const char *str, int c)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i = 0;

	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) == 0)
				break;
			++i;
	}
	return (i);
}

// int	main()
// {
// 	printf("ORIGINAL: %ld\n", strspn("Hello, World!", "HelloWrd"));
// 	printf("    FAKE: %ld\n", ft_strspn("Hello, World!", "HelloWrd"));
// 	printf("ORIGINAL: %ld\n", strspn("Vamos contar até 10!", "até"));
// 	printf("    FAKE: %ld\n", ft_strspn("Vamos contar até 10!", "até"));
// }