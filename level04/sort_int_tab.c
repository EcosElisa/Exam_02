// Assignment name  : sort_int_tab
// Expected files   : sort_int_tab.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// void sort_int_tab(int *tab, unsigned int size);

// It must sort (in-place) the 'tab' int array, that contains exactly 'size'
// members, in ascending order.

// Doubles must be preserved.

// Input is always coherent.

/*Responsável por ordenar um array de inteiros em ordem crescente usando o algoritimo 
de ordenação conhecido por "bubble sort"(ordenação por flutuação).
	Bubble Sort: é baseado em passar várias vezes pelo array e comparar elementos 
	adjacentes. A cada passagem, o maior elemento "flutua" para o final do array. Isso
	é repetido até que todo o array esteja ordenado.
*/

/*int	*tab: É um ponteiro para o primeiro elemento de um array de inteiros que será
ordenado.
unsigned int	size: É o tamanho do array, ou seja, a quantidade de elementos que ele
contém.*/

void sort_int_tab(int *tab, unsigned int size)
{
	int	i = 0;	//representa o índice do primeiro elemento do array.
	int	temp;	/*variável temporária que será utilizada para trocar dois elementos de
	posição no array, caso seja necessário durante o processo de ordenação.*/

	while (i < (size - 1))	/*size - 1: é utilizada para evitar acesso a posições 
	invalidas do array, já que as comparações são feitas com elemento seguinte.*/
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;	/*reseta i para zero para recomeçar a ordenação desde o início do
			array.*/
		}
		else
			i++;	/*Caso a comparação seja falsa (o elemento tab[i] não é maior que o
			elemento tab[i + 1]), a variável i é incrementada para avançar para a
			próxima posição no array.*/
	}
	/*O loop continua até que todos os elementos estejam em ordem, momento em que a
	condição (size - 1) será falsa e o loop será interrompido.*/
}