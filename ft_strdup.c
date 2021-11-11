/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emende <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:19:06 by emende            #+#    #+#             */
/*   Updated: 2021/11/11 16:10:31 by emende           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc(sizeof(copy) * ft_strlen(s1));
	if (!copy)
	{
		return (NULL);
	}
	while (s1[i])
	{	
		copy[i] = s1[i];
		i++;
	}
	copy[i] = s1[i];
	return (copy);
}
