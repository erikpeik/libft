/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emende <emende@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:59:40 by emende            #+#    #+#             */
/*   Updated: 2021/11/24 16:19:07 by emende           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	z;

	z = 0;
	i = ft_strlen(s1);
	while (z < ft_strlen(s2))
	{
		s1[i] = s2[z];
		z++;
		i++;
	}
	return (s1);
}
