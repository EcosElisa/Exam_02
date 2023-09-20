// Assignment name  : max
// Expected files   : max.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// int		max(int* tab, unsigned int len);

// The first parameter is an array of int, the second is the number of elements in
// the array.

// The function returns the largest number found in the array.

// If the array is empty, the function returns 0.

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int		maximo;
	unsigned int		i = 0;

	maximo = tab[i];
	if (!tab || len < 1)
		return (0);
	while (i < len)
	{
		if (tab[i] > maximo)
			maximo = tab[i];
		i++;
	}
	//printf("%d\n", maximo);
	return (maximo);
}

int	main()
{
	int	tab[5] = {5, 57, 420, 9, 20};
	max(tab, 5);
}
