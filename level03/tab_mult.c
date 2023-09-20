// Assignment name  : tab_mult
// Expected files   : tab_mult.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays a number's multiplication table.

// The parameter will always be a strictly positive number that fits in an int,
// and said number times 9 will also fit in an int.

// If there are no parameters, the program displays \n.

// Examples:

// $>./tab_mult 9
// 1 x 9 = 9
// 2 x 9 = 18
// 3 x 9 = 27
// 4 x 9 = 36
// 5 x 9 = 45
// 6 x 9 = 54
// 7 x 9 = 63
// 8 x 9 = 72
// 9 x 9 = 81
// $>./tab_mult 19
// 1 x 19 = 19
// 2 x 19 = 38
// 3 x 19 = 57
// 4 x 19 = 76
// 5 x 19 = 95
// 6 x 19 = 114
// 7 x 19 = 133
// 8 x 19 = 152
// 9 x 19 = 171
// $>
// $>./tab_mult | cat -e
// $
// $>

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 10)
	{
		ft_putchar(nbr + '0');
		return ;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putnbr(nbr % 10);
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	res = 0;
	int sign = 1;

	while ((str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}

int	main(int argc, char **argv)
{
	int	i = 1;
	int	nbr = ft_atoi(argv[1]);
	int	mult; 

	if (argc == 2)
	{
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " X ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			mult = i * nbr;
			ft_putnbr(mult);
			write(1, "\n", 1);
			i += 1;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}