/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:14:43 by jopires-          #+#    #+#             */
/*   Updated: 2024/09/03 14:14:45 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	nb2;

	nb2 = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		nb2 *= nb;
		nb--;
	}
	return (nb2);
}
/*int main()
{
	for(int i = -5; i< 17; i++)
		printf("%d = %d\n",i,ft_iterative_factorial(i));
}*/
