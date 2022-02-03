int ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	result = 1;
	i = 0;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_power(0, 0));
}
