// Assignment name  : reverse_bits
// Expected files   : reverse_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, reverses it, bit by bit (like the
// example) and returns the result.

// Your function must be declared as follows:

// unsigned char	reverse_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0010  0110
// 	 ||
// 	 \/
//  0110  0100

//////////////////////////////////////////////////////////////////////////////////////

//#include <stdio.h>

/*Apenas para testar*/
// void	printBinary(unsigned char c)
// {
// 	int i = 0;

// 	while (i < 8)
// 	{
//     	if ((128 >> i) & c)
// 			printf("1");
// 		else
// 			printf("0");
// 		i++;
// 	}
// 	if (i == 8)
// 		printf("\n");
// }


unsigned char	reverse_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		// printf("RES: %c", res);
		// printBinary(res);
		res = res * 2 + (octet % 2);		/*Explicação(1)*/
		// printf("OCTET: %c", octet);
		// printBinary(octet);
		// printf("\n");
		octet /= 2;							/*Explicação(2)*/
		i--;
	}
	return (res);
}

// int	main()
// {
// 	char character = 'A';
// 	printf("Valor binário do caractere - %c: ", character);
// 	printBinary(character);

// 	printBinary(reverse_bits(character));

// 	return (0);
// }

/*OUTPUT*/
/*Valor binário do caractere - A: 01000001
RES: 00000000
OCTET: A01000001

RES: 00000001
OCTET:  00100000

RES: 00000010
OCTET: 00010000

RES: 00000100
OCTET:00001000

RES:00001000
OCTET: 00000100

RES: 00010000
OCTET: 00000010

RES:  00100000
OCTET: 00000001

RES: A01000001
OCTET: 00000000

10000010*/

/*Explicação(1)
Inverte o bit menos significativo de 'octet' e adiciona ao 'res':
	Multiplica 'res' por 2 para deslocar os bits para a esquerda e fazer espaço para o
próximo bit invertido.
	Então, pega o valor do bit menos significativo de 'octet' (que é o resto da divisão
de 'octet' por 2) e o adiciona a 'res'.*/

/*Explicação(2)
Desloca os bits de 'octet' para a direita, dividindo por 2, o que é equivalente a
eliminar o bit menos significativo.*/