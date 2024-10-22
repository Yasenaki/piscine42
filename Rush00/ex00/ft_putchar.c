/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:10:16 by jopires-          #+#    #+#             */
/*   Updated: 2024/08/17 17:10:24 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putif(int idxx, int idxy, int x, int y)
{
	if (idxy == 0 || idxy == y - 1)
	{
		if (idxx == 0 || idxx == x - 1)
		{
			ft_putchar('o');
		}
		if (idxx != 0 && idxx < x - 1)
		{
			ft_putchar('-');
		}
	}
	if (idxy > 0 && idxy < y - 1)
	{
		if (idxx == 0 || idxx == x - 1)
		{
			ft_putchar('|');
		}
		if (idxx > 0 && idxx < x - 1)
		{
			ft_putchar(' ');
		}
	}
}
