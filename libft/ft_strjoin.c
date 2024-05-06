/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:02:52 by mrk               #+#    #+#             */
/*   Updated: 2024/03/09 14:05:29 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*buf;
	int		count;
	int		i;

	i = 0;
	count = 0;
	size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	buf = (char *)malloc(sizeof(char) * (size + 1));
	if (!buf)
		return (NULL);
	while (s1[i])
	{
		buf[i] = s1[i];
		i++;
	}
	while (s2[count] && i < size)
	{
		buf[i] = s2[count];
		i++;
		count++;
	}
	buf[i] = '\0';
	return (buf);
}
/*#include <stdio.h>
int	main()
{
	char s1[] = "lorem ipsum";
	char s2[] = "dolor sit amet";
	s2[0] = '\0';
	s1[0] = '\0';
	printf ("%s", ft_strjoin(s1, s2));
}*/
