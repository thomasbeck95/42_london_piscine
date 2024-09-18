/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:25:50 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/26 11:33:58 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(void)
{
	printf("%i\n", ft_recursive_power(2, 0));
	printf("%i\n", ft_recursive_power(0, 0));
	printf("%i\n", ft_recursive_power(2, 8));
	printf("%i\n", ft_recursive_power(3, 3));
	printf("%i\n", ft_recursive_power(7, 2));
	printf("%i\n", ft_recursive_power(9, 3));
}*/
