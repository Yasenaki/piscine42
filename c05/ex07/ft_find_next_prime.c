/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:38:32 by jopires-          #+#    #+#             */
/*   Updated: 2024/09/04 11:38:34 by jopires-         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
/*int main()
{
	int i = 37;
	printf("%d\n",ft_find_next_prime(i));
	return (0);
}*/
