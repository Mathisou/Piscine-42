#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	convert_deci_to_hexa(int ascii_value)
{
	int		i;
	int		j;
	char	*hexa;
	char	conversion[2];

	hexa = "0123456789abcdef";
	conversion[0] = '0';
	i = 0;
	j = 0;
	while (j < ascii_value)
	{
		if (hexa[i] == '\0')
		{
			i = 0;
			conversion[0]++;
		}
		j++;
		i++;
	}
	conversion[1] = hexa[i];
	ft_putchar(conversion[0]);
	ft_putchar(conversion[1]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i + 1] < 32 || str[i + 1] > 126) && i < ft_strlen(str) - 1)
		{
			ft_putchar(str[i]);
			ft_putchar('\\');
			convert_deci_to_hexa(str[i + 1]);
			i += 2;;
		}
		ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	char str[50] = "Coucou\atu vas\n bien ?";
	ft_putstr_non_printable(str);
}
