/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:53:07 by mrk               #+#    #+#             */
/*   Updated: 2024/03/11 16:05:15 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	p;
	unsigned int	c;
	char			*sub;

	c = 0;
	p = start;
	if (!s)
		return (NULL);
	if (start > ft_strlen((char *)s))
		len = 0;
	else if (len > (ft_strlen((char *)s) - start))
		len = ft_strlen((char *)s) - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (*s && len--)
	{
		sub[c] = s[p];
		c++;
		p++;
	}
	sub[c] = '\0';
	return (sub);
}
/*#include <stdio.h>
int	main()
{
	char s1[] = "0123456789";
	char *s2 = ft_substr(s1, 2, 15);
	printf("%s", s2); 
}*/
