/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:49:58 by jopires-          #+#    #+#             */
/*   Updated: 2024/09/04 08:49:59 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	while (x * x < nb)
	{
		x++;
	}
	if (x * x == nb)
		return (x);
	else
		return (0);
}
/*int main()
{
	int i =-500;
	while(i < 501)
	{
		if(ft_sqrt(i) != 0)
			printf("%d * %d = %d\n", ft_sqrt(i),ft_sqrt(i),i);
		i++;
	}
}*/
