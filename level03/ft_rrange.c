// Assignment name  : ft_rrange
// Expected files   : ft_rrange.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_rrange(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at end and end at start (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 3, 2 and 1
// - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing -3, -2, -1 and 0.

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*range;						// Ponteiro para a array resultante.
	int	i = 0;
	int	len = end - start + 1;		// Tamanho do array.

// Inverte start e end se start for maior que end
	if (start > end)
		return (ft_rrange(end, start));

// Aloca memória para o array
	range = (int *)malloc(sizeof(int) * len);
	if (range)
	{
		while (i < len)
		{
			range[i] = end;			// Preenche o array com o valor de 'end'
			end--;					// Decrementa 'end' para o próximo valor
			i++;					// Incrementa o contador do loop.
		}
	}
	return (range);
}
