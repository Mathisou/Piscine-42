#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (size > 0)
	{
		while (i < size)
		{
			if (tab[i] > tab[size - 1])
			{
				swap = tab[i];
				tab[i] = tab[size - 1];
				tab[size - 1] = swap;
			}
			i++;
		}
		i = 0;
		size--;
	}
	ft_putchar(tab[0] + 48);
	ft_putchar(tab[1] + 48);
	ft_putchar(tab[2] + 48);
	ft_putchar(tab[3] + 48);
	ft_putchar(tab[4] + 48);
}

int main()
{
	int tab[5];

	tab[0] = 2;
	tab[1] = 4;
	tab[2] = 8;
	tab[3] = 1;
	tab[4] = 5;
	ft_sort_int_tab(tab, 5);
}
