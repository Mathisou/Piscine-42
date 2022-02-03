#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	if (ft_strlen(base) < 2 || base[i] == '+' || base[i] == '-'
		|| (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
		return (0);
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j] || base[j] == '+'
				|| base[j] == '-' || (base[j] >= 9
					&& base[j] <= 13) || base[i] == 32)
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	len(int nb, int size_of_base)
{
	int	size;
	long int nbr;

	size = 0;
	nbr = nb;
	//printf("size of base = %d et nbr = %ld\n", size_of_base, nbr);
	if (nbr == -2147483648)
	{
		nbr = -nbr;
		size++;
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		size++;
	}
	if (nbr < size_of_base)
		return (size);
	while (nbr >= size_of_base)
	{
		//printf("%d\n", size);
		nbr = nbr / size_of_base;
		size++;
	}
	return (size);
}

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	find_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}
