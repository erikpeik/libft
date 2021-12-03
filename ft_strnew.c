/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emende <emende@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:27:28 by emende            #+#    #+#             */
/*   Updated: 2021/12/03 20:08:04 by emende           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	unsigned char	*str;

	str = (unsigned char *) malloc(sizeof(*str) * (size + 1));
	if (!str)
		return ((char *) NULL);
	ft_bzero(str, (size + 1));
	return ((char *) str);
}
