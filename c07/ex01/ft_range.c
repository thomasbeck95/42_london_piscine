/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:07:02 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/29 09:23:02 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_diff(int min, int max)
{
	int	diff;

	diff = max - min;
	return (diff);
}

int	*ft_range(int min, int max)
{
	int	*array;
	int	diff;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	diff = ft_diff(min, max);
	array = (int *) malloc(diff * (sizeof (int)));
	if (array == NULL)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

int	main(void)
{
	int *array;
	array = ft_range(10,1);
	for ( int i = 0; i < 10; i++)
		printf("%i", array[i]);
}
