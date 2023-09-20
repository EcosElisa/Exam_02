// Assignment name  : ft_atoi_base
// Expected files   : ft_atoi_base.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str (base N <= 16)
// to an integer (base 10) and returns it.

// The characters recognized in the input are: 0123456789abcdef
// Those are, of course, to be trimmed according to the requested base. For
// example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

// Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

// Minus signs ('-') are interpreted only if they are the first character of the
// string.

// Your function must be declared as follows:

// int	ft_atoi_base(const char *str, int str_base);

#include <stdlib.h>
#include <stdio.h>

//Converte um caractere maiúsculo em minúsculo, se for uma letra de 'A' a 'F'.
//Para as letras maiúscula e minúscula sejam tratadas de forma igual ao analisar os 
// numeros hexadecimais.
int	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'F')
	{
		c += 32;
		return (c);
	}
	return (c);
}

//Verifica se um caractere é válido na base especifica.
int	checkbase(char c, int base)
{
	int	max = 0;

	if (base < 10)               //Se a base for menor que 10, 'max' é definido como 
		max = base + '0';        // caractere correspondente ao maior digito da base.
	if (base > 9)                //Se a base for menor que 9, 'max' é definido como
		max = base - 10 + 'a';   // caractere correspondente a maior letra permitida na base.
	if (c >= '0' && c <= '9' && c <= max)
		return (c - '0');
	if (c >= 'a' && c <= 'f' && c <= max)
		return (c + 10 - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int base)
{
	int	i = 0;
	int	result = 0;
	int digit = 0;
	int	sign = -1;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	digit = checkbase(ft_tolower(str[i], base));
	while (digit >= 0)
	{
		result *= base;
		result += digit;
		i++;
	}
	return (res * sign);
}
