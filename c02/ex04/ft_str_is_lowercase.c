/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:33:17 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/19 11:27:44 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i", ft_str_is_lowercase("azeggege"));
	printf("%i", ft_str_is_lowercase("ZAAZAZZ"));
	printf("%i", ft_str_is_lowercase("123"));
	printf("%i", ft_str_is_lowercase("\a"));
	printf("%i", ft_str_is_lowercase(""));
}*/
