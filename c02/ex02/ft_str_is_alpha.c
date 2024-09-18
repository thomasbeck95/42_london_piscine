/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:34:03 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/18 17:57:22 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i", ft_str_is_alpha("ab defg"));
	printf("%i", ft_str_is_alpha("ab2defg"));
	printf("%i", ft_str_is_alpha("abcdefg"));
	printf("%i", ft_str_is_alpha("AbdefZ"));
	printf("%i", ft_str_is_alpha("AbdefZ"));
	printf("%i", ft_str_is_alpha("ABCDEFG"));
}*/
