/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emende <emende@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:44:26 by emende            #+#    #+#             */
/*   Updated: 2021/12/05 17:15:45 by emende           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_intlen -- find length of digits in integer */

size_t	ft_intlen(int n)
{
	int	i;

	i = 1;
	if (n == INT_MIN)
		return ((size_t) 11);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return ((size_t) i);
}
