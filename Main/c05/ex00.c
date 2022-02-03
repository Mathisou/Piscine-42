int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_factorial(-1));
}
