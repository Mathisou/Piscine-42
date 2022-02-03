#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	while (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}

int main()
{
	printf("%d\n", ft_recursive_power(5, -2));
}
