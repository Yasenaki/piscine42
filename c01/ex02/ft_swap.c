/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:18:06 by jopires-          #+#    #+#             */
/*   Updated: 2024/08/29 17:18:10 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*int main()
{
	int a1 = 10;
	int b1 = 5;

	ft_swap(&a1,&b1);
	printf("%d!%d",a1,b1);
	return (0);
}*/