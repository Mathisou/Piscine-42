#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(char *str);
int	check_base(char *base);
int	is_in_base(char c, char *base);
int	find_index(char c, char *base);
int	len(int nb, int size_of_base);

int	ft_atoi_base(char *nbr, char *base)
{
	int	result;
	int	count;
	int	i;

	i = 0;
	count = 1;
	result = 0;
	while (nbr[i] == 32 || (nbr[i] >= 9 && nbr[i] <= 13)
		|| nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			count = -count;
		i++;
	}
	while (is_in_base(nbr[i], base)) //&& nbr[i])
	{
		result = result * ft_strlen(base) + find_index(nbr[i], base);
		//printf("result = %ld\n", result);
		i++;
	}
	//printf("result * count = %ld\n", result*count);
	return (result * count);
}

char	*dec_to_base_to(long int nb, int size_of_base, char *str, char *base_to)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	i = len(nb, size_of_base) ;
	k = i + 1;
	//printf("nbr = %ld\n", nb);
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
	}
	while (nb >= size_of_base)
	{
		str[i] = base_to[nb % size_of_base];
		nb = nb / size_of_base;
		i--;
		//printf("i = %d et nb = %ld\n", i, nb);
	}
	//printf("%d")
	str[i] = base_to[nb % size_of_base];
	str[k] = '\0';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	intdecimal;
	char	*str;
	int		sign;
	int		size_to_malloc;
	int		size_of_base_to;

	intdecimal = 0;
	sign = 0;
	size_of_base_to = ft_strlen(base_to);
	size_to_malloc = 0;
	if (check_base(base_from) && check_base(base_to))
	{
		intdecimal = ft_atoi_base(nbr, base_from);
		//printf("intdecimal = %ld\n",intdecimal);
		size_to_malloc = len(intdecimal, size_of_base_to) + 1;
		//printf("intdecimal = %ld\n",intdecimal);
		//printf("size to malloc = %d\n", size_to_malloc);
		str = NULL;
		str = malloc(sizeof(char) * size_to_malloc);
		if (str == NULL)
			return (NULL);
		return (dec_to_base_to(intdecimal, size_of_base_to, str, base_to));
	}
	else
		return (NULL);
}

int	main(int ac, char **av)
{
	(void) ac;
	printf("%s\n", ft_convert_base(av[1], av[2], av[3]));
}
