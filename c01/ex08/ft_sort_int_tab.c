/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:59:37 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/12 14:14:07 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	pos;
	int	pas;
	int	temp;

	pas = 1;
	while (pas != 0)
	{
		pas = 0;
		pos = 0;
		while (pos < size - 1)
		{
			if (tab[pos] > tab[pos + 1])
			{
				temp = tab[pos];
				tab[pos] = tab[pos + 1];
				tab[pos + 1] = temp;
				pas++;
			}
			pos++;
		}
	}
}
/*int	main(void)
{
	int t[8] = {10,7,8,22,100,1,3,0};
	ft_sort_int_tab(t, 8);
	printf("%i %i %i %i %i %i %i %i", t[0],t[1],t[2],t[3],t[4],t[5],t[6],t[7]);
}*/
