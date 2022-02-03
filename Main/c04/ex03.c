#include <stdio.h>
#include <stdlib.h>
int ft_atoi(char *str)
{
	int i;
	int count;
	int result;

	i = 0;
	count = 1;
	result = 0;
	while (str[i])
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{

			if (str[i] == '-')
				count *= -1;
			i++;
		}
		while (str[i] >= 48 && str[i]<= 57)
		{
			result = result * 10 + str[i] - 48;
			i++;
		}
		return (result * count);
	}
	return (0);
}

int main()
{
	char str[50] = "   -+-2147i483649$#@51";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
}
