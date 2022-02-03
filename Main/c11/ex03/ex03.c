#include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (!(f(tab[i]) == 0))
			count++;
		i++;
	}
	return (count);
}


int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 48 && str[i] <= 57)))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char *tab[3] = {"h5", "5", " "}; // main a revoir, fonction any bonne
	printf("%d\n", ft_count_if(tab, 3, &ft_str_is_numeric));
}
