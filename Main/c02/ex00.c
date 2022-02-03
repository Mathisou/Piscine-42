#include <stdio.h>
#include <string.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	printf("%s\n", dest);
	return (dest);
}

int main()
{
	char dest[50] = "";
	char src[50] = "U'r welcome";
	ft_strcpy(dest, src);
	printf("Vraie fonction : %s\n", strcpy(dest, src));
}
