/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:12:27 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/19 10:29:10 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] -32;
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	pass;

	ft_lower(str);
	i = 0;
	pass = 0;
	while (str[i] != '\0')
	{
		while (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')))
		{
			i++;
			pass++;
		}
		while (pass >= 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			pass = 0;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int main(void)
{
char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
printf("%s\n", str);
printf("%s\n", ft_strcapitalize(str));
char str1[] = " salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
printf("%s\n", str1);
printf("%s\n", ft_strcapitalize(str1));
}*/
