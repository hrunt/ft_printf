/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:38:55 by mrk               #+#    #+#             */
/*   Updated: 2024/03/13 16:12:08 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dest2;

	dest2 = dest;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (dest2);
}
/*#include <unistd.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "lorem ipsum dolor sit amet";
	char *dest = src + 1;
	int i = 0;
	
	ft_memmove(src,dest,4);
	while (dest[i])
	{	
		write (1, &dest[i], 1);
		i++;
	}
}*/
