/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:32:31 by jopires-          #+#    #+#             */
/*   Updated: 2024/08/25 21:32:34 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	i2;
	int	temp;

	i = 0;
	i2 = 0;
	while (i < size)
	{
		i2 = 0;
		while (i2 < size)
		{
			if (tab[i2] < tab[i2 +1])
			{
				temp = tab[i2 +1];
				tab[i2 +1] = tab[i2];
				tab[i2] = temp;
			}
			i2++;
		}
		i++;
	}
}
/*
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	int b =9;
	int i =0;
	ft_rev_int_tab(a,b);
	while(a[i] != '\0')
	{
		printf("%d ",a[i]);
		i++;
	}
}*/
