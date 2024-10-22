/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:41:17 by jopires-          #+#    #+#             */
/*   Updated: 2024/09/03 14:41:18 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (ft_recursive_factorial(nb -1) * nb);
}
/*int main()
{
	for(int i = -5; i< 17; i++)
		printf("%d = %d\n",i,ft_recursive_factorial(i));
}*/
