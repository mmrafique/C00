/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhmajee <muhmajee@student.42barcelona.com>  #+#  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-13 22:57:07 by muhmajee          #+#    #+#             */
/*   Updated: 2025-08-13 22:57:07 by muhmajee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147482648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		nb = -nb;
	}
	if (nb > 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	ft_putnbr(-42);
	write(1, "\n", 1);
	return (0);
}
