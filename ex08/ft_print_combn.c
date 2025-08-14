#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = '0' + n % 10;
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 0;
	z = 0;
	while (m < n * n)
	{
		while (x <= 9 && y <= 9 && z < n)
		{
			if (x != y)
			{
				write(1, &x, 1);
			}
			x++;
			z++;
		}
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
