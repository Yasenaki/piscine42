/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:05:36 by jopires-          #+#    #+#             */
/*   Updated: 2024/09/03 17:05:39 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*int main()
{
	printf("%d\n",ft_iterative_power(46,0));
	printf("%d\n",ft_iterative_power(0,2));
	printf("%d\n",ft_iterative_power(46445223,2));
	printf("%d\n",ft_iterative_power(46,-2));
	printf("%d\n",ft_iterative_power(-46,2));
	printf("%d\n",ft_iterative_power(0,0));
	printf("%d\n",ft_iterative_power(1,1));
}*/
