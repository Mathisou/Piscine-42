#include <stdio.h>
int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char str[50] = "";

	printf("%d\n", ft_str_is_alpha(str));
}
