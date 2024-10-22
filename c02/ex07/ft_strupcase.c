/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:29:43 by jopires-          #+#    #+#             */
/*   Updated: 2024/08/27 15:29:45 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] < 97 || str[i] > 122))
			str[i] = str[i] -32;
		i++;
	}
	return (str);
}
/*int main()
{
	char inp[] =" ! a ! a ! vyvdhbewbekf89\n";
	char inp1[] ="123abWWWsss!!ssssu123\n";
	char inp2[] ="123!!MJJIJIJ123\n";
	char inp3[] ="123asssssss!!ssssu123\n";
	char inp4[] ="";
	
	
	printf("%s",ft_strupcase(inp));
	printf("%s",ft_strupcase(inp1));
	printf("%s",ft_strupcase(inp2));
	printf("%s",ft_strupcase(inp3));
	printf("%s",ft_strupcase(inp4));
}*/
