#include <unistd.h>

void	ft_putchar(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		i--;
	}
}

void	repeat_alpha(char *str)
{
	while (*str && *str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			ft_putchar(*str, *str + 1 -'a');
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar(*str, *str + 1 -'A');
		else
			ft_putchar(*str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (argv[1] && argv[1] != NULL)
			repeat_alpha(argv[1]);
	}
	else
		write(1, "\n", 1);
}