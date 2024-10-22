/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:03:37 by jopires-          #+#    #+#             */
/*   Updated: 2024/08/19 16:35:24 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	z;
	int	x;
	int	y;

	z = -1;
	while (z++ <= 6)
	{
		x = z;
		while (x++ <= 7)
		{
			y = x;
			while (y++ <= 8)
			{
				ft_putchar(z + '0');
				ft_putchar(x + '0');
				ft_putchar(y + '0');
				if (z != 7)
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}
/*int main()
{
	ft_print_comb();
	return (0);
}*/
