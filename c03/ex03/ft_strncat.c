/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:42:54 by jopires-          #+#    #+#             */
/*   Updated: 2024/09/01 18:42:56 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int unsigned	i;
	int unsigned	x;

	i = 0;
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/*int main()
{
	char a[20]="odqwqnodiwndoi";
	char b[100] = "! ";
	printf("%s",ft_strncat(b,a,5));
}*/
