// Assignment name  : swap_bits
// Expected files   : swap_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, swaps its halves (like the example) and
// returns the result.

// Your function must be declared as follows:

// unsigned char	swap_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0100 | 0001
//      \ /
//      / \
//  0001 | 0100


/*#include <unistd.h>

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
}*/

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet << 4 | octet >> 4));
}

/*int	main()
{
	unsigned int	octet = 65;

	print_bits(swap_bits(octet));
}*/