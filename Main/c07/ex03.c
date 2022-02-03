#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i])
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	return (dest);
}
#include <stdio.h>
char	*create_str(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		sizetomalloc;

	i = 0;
	sizetomalloc = 0;
	while (strs[i] && i < size)
	{
		sizetomalloc += ft_strlen(strs[i]);
		i++;
	}
	sizetomalloc += ft_strlen(sep) * (size - 1);
	if (size <= 0)
		sizetomalloc = 0;
	//printf("%d\n", sizetomalloc);
	str = malloc(sizeof(*str) * (sizetomalloc + 1));
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	k = 0;
	i = -1;
	str = create_str(size, strs, sep);
	if (size <= 0)
		return (str);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			str[k++] = sep[j];
			j++;
		}
	}
	str[k] = '\0';
	return (str);
}

int main()
{
	char *strs[4] = {"Hello", "How", "are", "you"};
	//char *str == "hello";

	printf("%s\n", ft_strjoin(4, strs, "///"));
}
