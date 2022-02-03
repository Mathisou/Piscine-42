#include <string.h>
#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
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
	ft_strncpy(dest, src, 11);
	printf("Vraie fonction : %s\n", strncpy(dest, src, 11));
}
