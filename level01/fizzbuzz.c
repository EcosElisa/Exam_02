// Assignment name  : fizzbuzz
// Expected files   : fizzbuzz.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that prints the numbers from 1 to 100, each separated by a
// newline.

// If the number is a multiple of 3, it prints 'fizz' instead.

// If the number is a multiple of 5, it prints 'buzz' instead.

// If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

// Example:

// $>./fizzbuzz
// 1
// 2
// fizz
// 4
// buzz
// fizz
// 7
// 8
// fizz
// buzz
// 11
// fizz
// 13
// 14
// fizzbuzz
// [...]
// 97
// 98
// fizz
// buzz
// $>

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i = 0;

	while (str[i] && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	char	digit;
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	digit = nbr % 10 + '0';
	write(1, &digit, 1);

}

int	main()
{
	int	count = 1;

	while (count <= 100)
	{
		if (!(count % 3))
			ft_putstr("fizz\n");
		else if (!(count % 5))
			ft_putstr("buzz\n");
		else if (!(count % 3) && !(count % 5))
			ft_putstr("fizzbuzz\n");
		else
		{
			ft_putnbr(count);
			write(1, "\n", 1);
		}
		count++;
	}
	return (0);
}