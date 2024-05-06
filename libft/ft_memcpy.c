/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:51:30 by mrk               #+#    #+#             */
/*   Updated: 2024/03/14 15:25:12 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*src2;
	char	*dest2;
	size_t	i;

	src2 = (void *) src;
	dest2 = dest;
	if (src2 == NULL && dest2 == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}
/*#include <unistd.h>
#include <string.h>
int	main(void)
{
	char dest[] = "HELLO";
	char src[] = "OLLAH";
	int i = 0;

	ft_memcpy(dest, src, 4);
	while (dest[i])
	{
		write (1, &dest[i], 1);
		i++;
	}
}*/
