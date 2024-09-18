/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:45:30 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/12 15:39:20 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int x;
	int y;
	int *px;
	int *py;

	x = 2;
	y = 3;
	px = &x;
	py = &y;
	ft_swap(px, py);
	printf("x = %i\n", x);
	printf("y = %i\n", y);
}*/
