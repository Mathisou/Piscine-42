#include <stdio.h>
int	ft_any(char **tab, int(*f)(char*))
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (!(f(tab[i]) == 0))
			return (1);
		i++;
	}
	return (0);
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
	char *tab[3] = {"0d", "Hello", NULL};
	printf("%d\n", ft_any(tab, &ft_str_is_numeric));
}
