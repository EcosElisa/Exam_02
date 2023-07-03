// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// strcspn() - get length of a prefix substring.
// Description: The strcspn() function calculates the length of the initial segment of s
// which consists entirely of bytes not in reject.
// Return value: The strcspn() function returns the number of bytes in the initial 
// segment of s which are not in the string reject.

/////////////////////////////////////////////////////////////////////////////////////////////
// The C library function size_t strcspn(const char *str1, const char *str2) calculates the
// length of the initial segment of str1, which consists entirely of characters not in str2.

// 	str1 - This is the main C string to be scanned.
// 	str2 - This is the string containing a list of characters to match in str1.

// This function returns the number of characters in the initial segment of string str1 which
// are not in the string str2.

// Exemplo:
// #include <stdio.h>
// #include <string.h>

// int main () {
//    int len;
//    const char str1[] = "ABCDEF4960910";
//    const char str2[] = "013";

//    len = strcspn(str1, str2);

//    printf("First matched character is at %d\n", len + 1);
   
//    return(0);
// }

// Output: First matched character is at 10
/////////////////////////////////////////////////////////////////////////////////////////////

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);

/*#include <stdio.h>
#include <string.h>*/

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j;

	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (reject[j] == s[i])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}


/*int	main()
{
	printf("ORIGINAL: %ld\n", strcspn("A raposa(12) marrom rápida salta sobre o cão(<#@+=>) preguiçoso!", "wyue10"));
	printf("   FAKE: %ld\n", ft_strcspn("A raposa(12) marrom rápida salta sobre o cão(<#@+=>) preguiçoso!", "wyue10"));
	printf("ORIGINAL: %ld\n", strcspn(" 1, 2, 3... Vamos contar até 10! A resposta é: 42. $10 de desconto para cada item! Olá, mundo! :)", "0ola"));
	printf("   FAKE: %ld\n", ft_strcspn(" 1, 2, 3... Vamos contar até 10! A resposta é: 42. $10 de desconto para cada item! Olá, mundo! :)", "0ola"));
}*/