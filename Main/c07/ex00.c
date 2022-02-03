#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
#include <stdio.h>
#include <string.h>
int main()
{
	printf("%s\n", ft_strdup("Helloooooooooooooooooooooooooooooooooooooooooooooo"));
	printf("%s\n", strdup("Helloooooooooooooooooooooooooooooooooooooooooooo"));
}
