/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:04:15 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/26 15:26:27 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	n = nb;
	i = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		nb = nb * n;
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_iterative_power(2, 0)); 
	printf("%i\n", ft_iterative_power(0, 0)); 
	printf("%i\n", ft_iterative_power(-2, 5)); 
	printf("%i\n", ft_iterative_power(-8, 3)); 
	printf("%i\n", ft_iterative_power(0, 1));
	printf("%i\n", ft_iterative_power(4, -5)); 
	printf("%i\n", ft_iterative_power(-8, 2)); 
}
*/
