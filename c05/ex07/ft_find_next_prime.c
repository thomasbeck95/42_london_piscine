/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:21:25 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/26 10:24:27 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 3)
		return (2);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			i = 2;
			nb++;
		}
		i++;
	}
	return (nb);
}

/*#include <stdio.h>

int     main(void)
{
        printf("%i\n", ft_find_next_prime(7850));
        printf("%i\n", ft_find_next_prime(3));
        printf("%i\n", ft_find_next_prime(318));
        printf("%i\n", ft_find_next_prime(1095));
        printf("%i\n", ft_find_next_prime(1491));
}*/
