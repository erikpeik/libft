/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                 :+:        +:+:+: :+:+:+    */
/*                                                    +:+ +:+         +:+     */
/*   By: emende <emende@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:23:14 by emende            #+#    #+#             */
/*   Updated: 2021/11/24 22:09:01 by emende       ########## ###       ###    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	z;
	char	*buffer;
	buffer = ft_strdup(dst);

	i = ft_strlen(dst);
	z = 0;
	if (dstsize <= 0 || ft_strlen(dst) >= dstsize)
		return (i);
	while (z < ft_strlen(src) && i < dstsize - 1)
	{
		dst[i] = src[z];
		z++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(buffer) + ft_strlen(src));
}
