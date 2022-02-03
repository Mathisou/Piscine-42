#include <stdlib.h>
#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * size);
	if (range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		printf("%d\n", (*range)[i]);
		min++;
		i++;
	}
	return (size);
}
#include <stdio.h>
int main()
{
	int *range;
	printf("hey %d\n", ft_ultimate_range(&range, 3, 8));
}
