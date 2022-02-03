#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
int main()
{
	char s1[50] = "hello";
	char s2[50] = "";

	printf("%d\n", ft_strncmp(s1, s2, 2));
	printf("Vraie fonction : %d", strncmp(s1, s2, 2));
}
