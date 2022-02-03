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
	j = 1;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1
		|| base[i] == '-' || base[i] == '+')
		return (0);
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j] || base[j] == '-' || base[j] == '+')
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
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

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	count;
	int	i;

	i = 0;
	result = 0;
	count = 1;
	if (check_base(base) == 1)
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				count *= -1;
			i++;
		}
		while (is_in_base(str[i], base) && str[i])
		{
			result = result * ft_strlen(base) + find_index(str[i], base);
			i++;
		}
		return (result * count);
	}
	return (0);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi_base("          +-+-+214", "0123456789ABCDEF"));
}
