#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

int main()
{
	char dest[50] = "Hello";
	char src[50] = "";

	printf("%d\n", ft_strlcpy(dest, src, 5));
	printf("%lu", strlcpy(dest, src, 5));
}
