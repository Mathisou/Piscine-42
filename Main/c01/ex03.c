#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b + 48;
	*mod = a % b + 48;
	write(1, div, 1);
	write(1, "\n", 1);
	write(1, mod, 1);
}

int main()
{
	int *div, *mod, c, d;
	c = 5;
	d = 5;
	div = &c;
	mod = &d;
	ft_div_mod(10, 2, div, mod);
}
