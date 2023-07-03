// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);

// strpbrk() - busca na string por qualquer caractere pertencente a 
// uma segunda string e retorna um ponteiro para a primeira ocorrência
// encontrada.

// str1 - string na qual queremos buscar um caractere.
// str2 - string contendo os caracteres a serem procurados.

// A função percorre a string str1 da esquerda para a direita, comparando
// cada caractere com os caracteres presentes em str2. Quando encontra um
// caractere que está presente em str2, retorna um ponteiro para a primeira 
// ocorrência desse caractere em str1.

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;
	int	j;

	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s2[j] == s1[i])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*int	main()
{
	char str1[] = "A raposa(12) marrom rápida salta sobre o cão(<#@+=>) preguiçoso!";
	char str2[] = "wyue10";

	//char str3[] = "A resposta é: 42. $10 de desconto para cada item! Olá, mundo! :)";
	//char str4[] = "A resposta é: 42. $10 de desconto para cada item! Olá, mundo! :)";


	char *result1 = strpbrk(str1, str2);
	//char *result2 = strpbrk(str3, str4);

	if (result1 != NULL)
		printf("Primeira ocorrência encontrada: %c\n", *result1);
	else
		printf("Nenhuma ocorrência encontrada.\n");

	// return 0;

	printf("ORIGINAL: %p\n", strpbrk(str1, str2));
	printf("    FAKE: %p\n", ft_strpbrk(str1, str2));
	// printf("ORIGINAL: %p\n", strpbrk(str3, str4));
	// printf("    FAKE: %p\n", ft_strpbrk(str3, str4));
}*/