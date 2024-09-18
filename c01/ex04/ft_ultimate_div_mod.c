/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:29:10 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/12 15:45:00 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

/*int main(void)
{
	int x = 10;
	int y = 6;
	int *pa = &x;
	int *pb = &y;

	ft_ultimate_div_mod(pa, pb);
	printf("%i.%i\n", x, y);
}*/
