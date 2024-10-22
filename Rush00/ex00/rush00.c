/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:20:02 by jopires-          #+#    #+#             */
/*   Updated: 2024/08/17 17:42:50 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y)
{
	int	idxx;
	int	idxy;

	idxx = 0;
	idxy = 0;
	if (x > 0 && y > 0 && x < 200 && y < 200)
	{
		while (y >= idxy)
		{
			idxx = 0;
			while (x >= idxx)
			{
				ft_putif(idxx, idxy, x, y);
				ft_putnl(idxx, idxy, x, y);
				idxx++;
			}
			idxy++;
		}
	}
	if (x <= 0 || y <= 0 || x > 199 || y > 199)
	{
		write (1, "Error (x > 0 && y > 0 && x < 200 && y < 200)", 44);
	}
}
