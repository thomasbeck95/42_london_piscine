/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:18:25 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/28 18:35:39 by thbeck           ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	diff = ft_diff(min, max);
	*range = (int *) malloc(diff * (sizeof(int)));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (diff);
}
/*
int	main(void)
{
	int a;
	int *ab;
	int **array;

	a = 0;
	ab = &a;
	array = &ab;
	ft_ultimate_range(array, 0,10);
	printf("%d", ft_ultimate_range(array, 0, 10));
}*/
