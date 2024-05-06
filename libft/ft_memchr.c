/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:56:16 by mrk               #+#    #+#             */
/*   Updated: 2024/03/12 17:27:06 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *) s;
	while (i < n)
	{
		if (s2[i] == (unsigned char)c)
			return (&s2[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s[] = "ÿÿ1";
	int c = 191;
	int i = 0;
	char *ptr;
	ptr = ft_memchr(s,c,4);
	printf ("%s", ptr);
}*/	
