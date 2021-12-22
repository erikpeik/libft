/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emende & altikka                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:53:13 by emende            #+#    #+#             */
/*   Updated: 2021/12/22 19:31:06 by emende           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_og(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		((unsigned char *) b)[i++] = (unsigned char ) c;
	return (b);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	arr[sizeof(long)];
	void			*ptr;

	if (len < sizeof(long) + sizeof(int))
		return (ft_og(b, c, len));
	ptr = b;
	ft_og((void *) arr, c, sizeof(long));
	while (len >= sizeof(long))
	{
		*(long *) ptr = *(long *) arr;
		ptr += sizeof(long);
		len -= sizeof(long);
	}
	if (len >= sizeof(int))
	{
		*(int *) ptr = *(int *) arr;
		ptr += sizeof(int);
		len -= sizeof(int);
	}
	while (len-- > 0)
		*(unsigned char *) ptr++ = (unsigned char ) c;
	return (b);
}
