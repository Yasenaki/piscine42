/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 07:48:45 by jopires-          #+#    #+#             */
/*   Updated: 2024/08/26 07:48:49 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	i2;
	int	temp;

	i = 0;
	i2 = 0;
	while (i < size)
	{
		i2 = 0;
		while (tem[i2] != '\0')
		{
			if (tab[i2] > tab[i2 +1])
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
	int a[]={3,2,0,5,5,0,7,1};
	int b =8;
	int i=0;
	ft_sort_int_tab(a,b);
	while(i < b)
	{
		printf("%d ",a[i]);
		i++;
	}
	return(0);
}*/
