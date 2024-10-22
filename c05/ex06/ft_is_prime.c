/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:07:52 by jopires-          #+#    #+#             */
/*   Updated: 2024/09/04 10:07:54 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (x <= 1)
		return (0);
	while (x <= nb)
	{
		if (nb % x == 0)
		{
			if (x == nb)
				return (1);
			else
				return (0);
		}
		x++;
	}
	return (0);
}
/*int main()
{
	int i =0;
	while(i < 501)
	{
		if(ft_is_prime(i) != 0)
			printf("%d %d\n",i,ft_is_prime(i));
		i++;
	}
}*/
