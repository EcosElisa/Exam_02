// Assignment name  : print_bits
// Expected files   : print_bits.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
// AT THE END.

// Your function must be declared as follows:

// void	print_bits(unsigned char octet);

// Example, if you pass 2 to print_bits, it will print "00000010"

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int	i = 0;
	
	while (i < 8)
	{
		if ((128 >> i) & octet)
			ft_putchar('1');
		else
			ft_putchar('0');
		i++;
	}
}

// int	main()
// {
// 	print_bits(1);
// 	write(1, "\n", 1);
// 	print_bits(2);
// 	write(1, "\n", 1);
// 	print_bits(3);
// 	write(1, "\n", 1);
// 	print_bits(4);
// 	write(1, "\n", 1);
// 	print_bits(5);
// 	write(1, "\n", 1);
// 	print_bits(6);
// 	write(1, "\n", 1);
// 	return (0);
// }