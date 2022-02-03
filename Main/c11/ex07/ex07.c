#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}


void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	char	*swap;

	i = 0;
	while (tab[i + 1])
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	printf("%s\n", tab[3]);
	printf("%s\n", tab[4]);
	printf("%s\n", tab[5]);
	printf("%s\n", tab[6]);
	printf("%s\n", tab[7]);
	printf("%s\n", tab[8]);
	printf("%s\n", tab[9]);
	printf("%s\n", tab[10]);
}

int main()
{
	char *tab[12] = {"abc", "aabc", "abbc", "uVNqolHMvDUj", "joszQaEif39", "Q", "er", "x", "rT5go6NOBbtX", "e5", "8bUK4", 0};
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
}
