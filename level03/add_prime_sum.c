#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res = 0;
	int	i = 0;

	while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int	ft_is_prime(int num)
{
	int	i = 2;

	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	put_nbr(int n)
{
	char	digit;
	if (n >= 10)
		put_nbr(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);*000
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	nbr = ft_atoi(argv[1]);
		int	sum = 0;

		while (nbr > 0)
		{
			if (ft_is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		put_nbr(sum);
	}
	write(1, "\n", 1);
}