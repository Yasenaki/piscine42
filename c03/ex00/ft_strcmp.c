/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:22:47 by jopires-          #+#    #+#             */
/*   Updated: 2024/09/01 17:22:49 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*int main()
{
	printf("%d\n",ft_strcmp("a","a"));
	printf("%d\n",ft_strcmp("ab","a"));
	printf("%d\n",ft_strcmp("a","ab"));
	printf("%d\n",ft_strcmp("abc","abe"));
	printf("%d\n",ft_strcmp("ate","age"));
	printf("%d\n",ft_strcmp("ave","ate"));
	printf("%d\n",ft_strcmp("",""));
	printf("%d\n",ft_strcmp(" "," "));
	printf("%d\n",ft_strcmp("z","a"));
	printf("%d\n",ft_strcmp("a","z"));
}*/
