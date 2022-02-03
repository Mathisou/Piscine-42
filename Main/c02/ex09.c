#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i])
	{
		if ((!((str[i - 1] >= 65 && str[i - 1] <= 90) || (str[i - 1] >= 97 && str[i - 1] <= 122) || (str[i - 1] >= 48 && str[i - 1] <= 57)) && (str[i] >= 97 && str[i] <= 122)))
			str[i] -= 32;
		i++;
	}
	return (str);
}

int main()
{
	char str[100] = "s#alut, c%omment tu ^vas ? 42mots  quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
}
