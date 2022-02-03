#include <stdio.h>
#include <string.h>
unsigned int ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;

	i = 0;
	dest_size = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_size] = src[i];
		i++;
		dest_size++;
	}
	dest[dest_size + i] = '\0';
	if	(size < ft_strlen(dest))
		return  (ft_strlen(src) + size);
	else
		return (ft_strlen(dest) + ft_strlen(src));
}


int main()
{
	char dest[50] = "hello ";
	char src[50] = "world";
	printf("%d\n", ft_strlcat(dest, src, 3));
	printf("%lu", strlcat(dest, src, 3));
}
