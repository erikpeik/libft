/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emende <emende@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:40:14 by emende            #+#    #+#             */
/*   Updated: 2021/12/04 14:20:52 by emende           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_splits(char const *s, char c)
{
	size_t	i;
	size_t	res;
	size_t	count;

	res = 0;
	i = 0;
	count = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c && count == i)
		{
			res++;
			count = 0;
		}
		else if (s[i] = c)
		{
			count = 1;
		}
		i++;
	}
	return (res + 1);
}

char	**ft_strsplit(char const *s, char c)
{
	if (!s)
		return (NULL);
	(void )c;
	return ((char **) NULL);
}
