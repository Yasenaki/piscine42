/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 07:37:36 by jopires-          #+#    #+#             */
/*   Updated: 2024/09/04 07:37:38 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (ft_recursive_power(nb, power -1) * nb);
}
/*int main()
{
	printf("%d\n",ft_recursive_power(46,0));
	printf("%d\n",ft_recursive_power(0,2));
	printf("%d\n",ft_recursive_power(46445223,2));
	printf("%d\n",ft_recursive_power(46,-2));
	printf("%d\n",ft_recursive_power(-46,2));
	printf("%d\n",ft_recursive_power(0,0));
	printf("%d\n",ft_recursive_power(1,1));
}*/
