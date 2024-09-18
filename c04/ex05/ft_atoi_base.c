/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:44:09 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/29 17:46:11 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (*base)
	{
		base++;
		i++;
	}
	return (i);
}

int	ft_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_get_int(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	i;
	int	len;

	i = 0;
	sign = 1;
	result = 0;
	len = ft_strlen(base);
	if (ft_check(base) == 0)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (str[i])
	{
		if (ft_get_int(str[i], base) == -1)
			break ;
		result = (result * len) + (ft_get_int(str[i], base));
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	printf("%i", ft_atoi_base("1", "1"));
}
