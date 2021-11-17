/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emende <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:27:11 by emende            #+#    #+#             */
/*   Updated: 2021/11/17 21:43:18 by emende           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	str = str + ft_strlen(str) - 1;
	while (*str != c)
	{
		if (*str == '\0')
			return (NULL);
		str--;
	}
	return (str);
}
