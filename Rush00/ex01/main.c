/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:25:56 by jopires-          #+#    #+#             */
/*   Updated: 2024/08/17 17:08:35 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnl(int idxx, int idxy, int x, int y)
{
	if (idxx >= x && idxy < y - 1)
	{
		write(1, "\n", 2);
	}
}

int	main(void)
{
	rush(5, 5);
	return (0);
}