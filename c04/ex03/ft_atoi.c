/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:04:24 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/29 14:38:00 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	long	sign;
	long	result;

	sign = 1;
	result = 0;
	while (*str == ' '|| (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if(*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = (10 * result) + (*str - '0');
		str++;
	}
	return ((int)(sign * result));
}

#include <stdio.h>

int     main(void)
{
    printf("%i", ft_atoi("-----------123"));
    printf("\n");
    printf("%i", ft_atoi("\n-a-123\n"));
    printf("\n");
    printf("%i", ft_atoi("2147483647\n"));
    printf("\n");
    printf("%i", ft_atoi("-2147483648\n"));
    printf("\n");
    printf("%i", ft_atoi("\n-a-123\n"));
    printf("\n");
}
