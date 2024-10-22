/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 07:40:51 by jopires-          #+#    #+#             */
/*   Updated: 2024/09/02 07:40:55 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[i] != '\0' && (x + i +1) < size)
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = '\0';
	return (x + i);
}
/*int main()
{
	char a[20]="odqwqnodiwndoi";
	char b[100] = "! ";
	printf("%d",ft_strlcat(b,a,5));
}*/
