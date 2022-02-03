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

int count_string(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char **	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*swap;
	int size;

	i = 0;
	j = i + 1;
	size = count_string(tab);
	while (i < size)
	{
		while (j < size)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
				j = i;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	tab[i] = 0;
	return (tab);
	/*printf("%s\n", tab[0]);
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
	printf("%s\n", tab[11]);
	printf("%s\n", tab[12]);
	printf("%s\n", tab[13]);*/
}
int main()
{
	char *tab[15] = {"Tay", "s2", "njtaHrURq5", "vhsI43zj", "3Nx0RdwHuS1j", "7QAmKoEs", "y2RwnN7", "uU1FKBADpQg", "Y", "f", "GOvl1i8K7", "WP7CgM", "E", "2CsO", 0};
	char **tab2;
	tab2 = ft_sort_string_tab(tab);
	int i;
	i = 0;
	while (i < count_string(tab2))
	{
		printf("%s\n", tab2[i]);
		i++;
	}
}
