/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbeck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:21:01 by thbeck            #+#    #+#             */
/*   Updated: 2024/08/29 21:27:19 by thbeck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	ft_neg(int Value)
{
	if (Value < 0)
		Value *= -1;
	return (Value);
}

# define ABS(Value) ft_neg(Value)
#endif
