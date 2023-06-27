//Escreva uma função que inverta uma cadeia de caracters, modificando-a.
//Ela deverá retornar seu parâmetro. Sua função deverá ser prototipada da
//seguinte maneira:
//	char	*ft_strrev(char *str);

#include <stdio.h>
#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	size = 0;
	while (*str)
	{
		str++;
		size++;
	}
	return (size);
}

void	swap(char *a, char *b)
{
	char	temp = *a;
	*a = *b;
	*b = temp;
}

char	*ft_strrev(char *str)
{
	int	n_de_op = ft_strlen(str) / 2;
	int	count = 0;
	char	*inicio = str;
	char	*final = str + (ft_strlen(str) - 1);

	while (count < n_de_op)
	{
		inicio++;
		final--;
		count++;
	}
	return (str);
}

int	main(void)
{
	char *palavra = "batata";
	printf("%s\n", palavra);
	ft_strrev(palavra);
}
