int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int j;
	int sens;

	i = 0;
	j = 0;
	sens = 0;
	while (i < length - 1)
	{
		sens = f(tab[i], tab[i + 1]);
		if (sens > 0 && j == 0)
			j = 1;
		else if (sens < 0 && j == 0)
			j = -1;
		if (j == 1 && sens < 0)
			return (0);
		else if (j == -1 && sens > 0)
			return (0);
		i++;
	}
	return (1);
}

int    minus(int nb, int n)
{
    return (nb - n);
}
#include <stdio.h>
int main()
{
    int tab[4] ={-3, -2, -2, 4};
    printf("%d\n", ft_is_sort(tab, 4, &minus));
}
