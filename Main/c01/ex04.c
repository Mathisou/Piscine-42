#include <unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	int d;

	c = *a / *b + 48;
	d = *a % *b + 48;
	*a = c;
	*b = d;
	write(1, a, 1);
	write(1, "\n", 1);
	write(1, b, 1);
}

int main()
{
	int c, d, *a, *b;
	c = 6;
	d = 2;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a,b);
}
