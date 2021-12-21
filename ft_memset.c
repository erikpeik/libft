/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emende & altikka                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:53:13 by emende            #+#    #+#             */
/*   Updated: 2021/12/21 20:14:13 by emende           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	arr[sizeof(double)];
	size_t	i;
	void	*head;

	head = b;
	i = 0;
	while (i < len && i < sizeof(long))
		((unsigned char *) arr)[i++] = (unsigned char) c;
	while (len >= sizeof(long))
	{
		*(long *) b = *(long *) arr;
		b += sizeof(long);
		len -= sizeof(long);
	}
	if (len >= sizeof(int))
	{
		*(int *) b = *(int *) arr;
		b += sizeof(int);
		len -= sizeof(int);
	}
	if (len >= sizeof(short int))
	{
		*(short int *) b = *(short int *) arr;
		b += sizeof(short int);
		len -= sizeof(short int);
	}
	while (len > 0)
	{
		*(unsigned char *) b++ = (unsigned char ) c;
		len--;
	}
	return (head);
}
