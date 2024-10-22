/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:00:33 by jopires-          #+#    #+#             */
/*   Updated: 2024/09/01 22:00:34 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		x = 0;
		while (to_find[x + i] != '\0' && str[x + i] == to_find[x])
		{
			if (to_find[x +1] == '\0')
				return (&str[i]);
			x++;
		}
		i++;
	}
	return (0);
}
/*int main()
{
	char sti[] = "hello, world!";
	char str[] = "world";
	printf("%s",ft_strstr(sti,str));
}*/
