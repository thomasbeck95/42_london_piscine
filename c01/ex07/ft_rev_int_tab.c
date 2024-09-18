/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:52:17 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/13 10:33:48 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;
	int	temp;

	i = 0;
	j = size - 1;
	k = (size + 1) / 2;
	while (i < k)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*int	main(void)
{
	int size = 5;
	int t[] = {1,2,3,4,5};

	ft_rev_int_tab(t, size);
	printf("%i %i %i %i %i", t[0],t[1],t[2],t[3],t[4]);
}*/
