// Assignment name  : is_power_of_2
// Expected files   : is_power_of_2.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that determines if a given number is a power of 2.

// This function returns 1 if the given number is a power of 2, otherwise it returns 0.

// Your function must be declared as follows:

// int	is_power_of_2(unsigned int n);

//#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (n % 2 != 0)
			return (0);
		n = n / 2;
	}
	return (1);
}

//int	main()
//{
//	printf("%d\n", is_power_of_2(3));
//	printf("%d\n", is_power_of_2(128));
//	printf("%d\n", is_power_of_2(0));
//	printf("%d\n", is_power_of_2(64));
//}

/*Explicação do código:

Esse código implementa uma função chamada is_power_of_2, que tem o objetivo de
verificar se um número inteiro sem sinal (unsigned int) é uma potência de 2 ou não.
Uma potência de 2 é um número que pode ser obtido elevando 2 a algum expoente inteiro.

Vamos analisar o código passo a passo:

	1- A função recebe um parâmetro n, que é o número a ser verificado.

	2 - Primeira verificação: Se n for igual a 0, a função imediatamente retorna 0,
	indicando que 0 não é uma potência de 2.

	3 - Se n não for igual a 0, o código entra em um loop while. Enquanto n for maior
	que 1, o loop será executado.

	4 - Dentro do loop, é verificado se n é ímpar (ou seja, n % 2 != 0). Se n for
	ímpar, isso significa que ele não é uma potência de 2, pois as potências de 2
	são sempre números pares (exceto a própria potência 2).

	5 - Se n não for ímpar (ou seja, for par), então é possível continuar verificando
	se é uma potência de 2. Para isso, é feita a operação n = n / 2, que reduz n à
	metade.

	6 - O loop continuará a executar o passo 4 e 5 até que n seja 1 ou um número menor
	do que 1.

	7 - Se n acabar sendo igual a 1 após as operações de divisão sucessivas por 2,
	isso significa que o número inicial era uma potência de 2, e a função retorna 1
	para indicar que é verdadeiro.

	8 - Caso n seja menor do que 1 em algum momento, isso indica que o número inicial
	não era uma potência de 2, e a função retorna 0 para indicar que é falso.

Em resumo, a função retorna 1 se o número n for uma potência de 2 e retorna 0 caso
contrário.*/
