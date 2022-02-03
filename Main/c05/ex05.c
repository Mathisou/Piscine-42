int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb == 1)
		return(1);
	if (nb < 1)
		return (0);
	while (i <= nb / 2 && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(2147395600));
}
