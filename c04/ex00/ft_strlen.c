/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:14:45 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/21 22:25:11 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_strlen("hello"));
	printf("%i\n", ft_strlen(""));
	printf("%i\n", ft_strlen("aaaaaaaaaaaaaaaaaa"));
}*/
