#include <string.h>
#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return(s1[i] - s2[i]);
	//return (0);
}

int main()
{
	char s1[50] = "hey";
	char s2[50] = "hello";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
}
