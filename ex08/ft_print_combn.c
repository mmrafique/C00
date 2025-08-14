#include <unistd.h>

void	ft_print_combn(int n)
{
	int	a[10];
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	i = -1;
	while (++i < n)
		a[i] = i;
	while (1)
	{
		i = -1;
		while (++i < n)
			write(1, &"0123456789"[a[i]], 1);
		if (a[0] == 10 - n)
			break ;
		write(1, ", ", 2);
		i = n;
		while (i-- && a[i] == 9 - (n - 1 - i))
			;
		a[i]++;
		while (++i < n)
			a[i] = a[i - 1] + 1;

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
