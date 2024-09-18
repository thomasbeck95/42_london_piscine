/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:20:50 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/26 17:58:46 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%i\n",ft_sqrt(1));
	printf("%i\n",ft_sqrt(64));
	printf("%i\n",ft_sqrt(24));
	printf("%i\n",ft_sqrt(100));
	printf("%i\n",ft_sqrt(-4));
}
