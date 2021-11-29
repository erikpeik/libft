/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emende <emende@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:07:23 by emende            #+#    #+#             */
/*   Updated: 2021/11/29 23:19:39 by emende           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	cr;

	i = 0;
	str = (unsigned char *)s;
	cr = (unsigned char )c;
	while (i < n)
	{
		if (*str == cr)
			return ((void *)str);
		str++;
		i++;
	}
	return (NULL);
}
