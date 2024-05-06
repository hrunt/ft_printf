/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:32:26 by mrk               #+#    #+#             */
/*   Updated: 2024/03/13 18:00:28 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	if ((!dst || !src) && !size)
		return (0);
	while (dst[j] && j < size)
		j++;
	while ((src[k]) && ((j + k + 1) < size))
	{
		dst[j + k] = src[k];
		k++;
	}
	if (j != size)
		dst[j + k] = '\0';
	return (j + ft_strlen(src));
}
/*#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int	main (void)
{
	char src[] = "AAAAAAAAA";
	char dest[] = "Sdadsasd";
	
	printf("%ld and %s\n", ft_strlcat(dest, src, 0), dest);
}*/
