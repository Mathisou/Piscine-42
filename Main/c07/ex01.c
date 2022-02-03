#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * size);
	while (min <= max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
#include <stdio.h>
int main()
{
	int i;
	int *tab;

	//printf("%d", ft_range(7, 5));
	i = 0;
	tab = ft_range(0, 100);
	while (i < 100)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
