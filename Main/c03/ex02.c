#include <stdio.h>
#include <string.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i])
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}

int main()
{
	char dest[50] = "Hello ";
	char src[50] = "World";
	printf("%s\n", ft_strcat(dest, src));
	//printf("%s", strcat(dest, src));
}
