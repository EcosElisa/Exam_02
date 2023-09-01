// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

//char	*ft_itoa(int nbr);


//#include <stdio.h>
#include <stdlib.h>

int	ft_size(int	n)
{
	int	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n /10;
		size++;
	}
	return (size);
}

char *ft_itoa(int nbr) 
{
	int		i = 0;
	int		len = ft_size(nbr);
	char	*result = (char *)malloc(sizeof(char) * (len + 1));

	if (!result)
		return(0);

	if(nbr == -2147483648)
		return("-2147483648\0");
	
	if (nbr < 0)
	{
		result[0] = '-';
		i = 1;
		nbr = -nbr;
	}

	while (len > i) 
	{
		result[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (result);
}

// int	main()
// {
// 	printf("nbr: %s\n", ft_itoa(10));
// 	printf("nbr: %s\n", ft_itoa(5593610));
// 	printf("nbr: %s\n", ft_itoa(-5593610));
// 	printf("nbr: %s\n", ft_itoa(0));
// 	printf("nbr: %s\n", ft_itoa(0));
// 	printf("nbr: %s\n", ft_itoa(2147483647));
// 	printf("nbr: %s\n", ft_itoa(-2147483648));
// 	printf("nbr: %s\n", ft_itoa(34678999907));
// 	return (0);
// }