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

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		if (argv[1] && argv[1] != NULL)
// 			ft_putstr(argv[1]);
// 		write(1, "\n", 1);
// 	}
// 	else
// 		write(1, "\n", 1);
// }