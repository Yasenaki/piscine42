/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:49:43 by jopires-          #+#    #+#             */
/*   Updated: 2024/08/28 09:49:45 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	*str = *str -32;
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			str[i] = str[i];
		else
			str[i] = str[i] +32;
		i++;
	}
	return (str);
}

char	*ft_ifstrcapitalize(char *str)
{
	int		i;
	char	a1;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i -1] < 'a' || str[i -1] > 'z')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (!(str[i -1] >= 65 && str[i -1] <= 90))
				{
					if (!(str[i -1] >= '0' && str[i -1] <= '9'))
					{
						a1 = str[i];
						str[i] = *ft_strupcase(&a1);
					}
				}
			}
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	ft_strlowcase(str);
	ft_ifstrcapitalize(str);
	return (str);
}
/*int main()
{
	char inp1[] ="z.a;?salut, comment tu vas ? 42mots quarante-deux; \\a";
	char inp2[] ="a!s@d#g dsd JJJ ,a.a, {a}-a";
	char inp3[] ="c=a+a*b";
	char inp4[] =".a;?salut, WDOWBDOIWDBO ? 42mots quarante-deux; a";
	char inp5[] ="xrct ctvybu vybuh vybuo 876tgv8 ; yvgbuhijn8s a";
	
	printf("%s\n",ft_strcapitalize(inp1));
	printf("%s\n",ft_strcapitalize(inp2));
	printf("%s\n",ft_strcapitalize(inp3));
	printf("%s\n",ft_strcapitalize(inp4));
	printf("%s\n",ft_strcapitalize(inp5));
}*/
