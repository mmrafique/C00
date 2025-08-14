#include <unistd.h>

void	ft_put2(int n)
{
	char	d1;
	char	d2;

	d1 = n / 10 + '0';
	d2 = n % 10 + '0';
	write(1, &d1, 1);
	write(1, &d2, 1);
}

void	ft_iswrite(int a, int b)
{
	ft_put2(a);
	write(1, " ", 1);
	ft_put2(b);
	if (a != 98 || b != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_iswrite(x, y);
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
	return (0);
}
