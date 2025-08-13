/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhmajee <muhmajee@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:28:43 by muhmajee          #+#    #+#             */
/*   Updated: 2025/08/12 14:31:01 by muhmajee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n > 0)
		write (1, "P", 1);
	else
		write (1, "N", 1);
}

/*int	main(void)
{
	ft_is_negative(-1);
	return (0);
}*/
