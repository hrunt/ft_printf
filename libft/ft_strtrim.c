/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:39:04 by mrk               #+#    #+#             */
/*   Updated: 2024/03/13 16:21:05 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count1(char *s1, char *set)
{
	int	s1_len;
	int	count;
	int	set_len;

	s1_len = 0;
	count = 0;
	set_len = 0;
	while (s1[s1_len])
	{
		while (set[set_len])
		{
			if (set[set_len] == s1[s1_len])
			{
				count++;
				break ;
			}
			set_len++;
		}
		if (set[set_len] == '\0')
			break ;
		set_len = 0;
		s1_len++;
	}
	return (count);
}

static int	ft_count2(char *s1, char *set)
{
	int	s1_len;
	int	count;
	int	set_len;

	s1_len = ft_strlen((char *)s1) - 1;
	count = 0;
	set_len = 0;
	while (s1_len >= 0)
	{
		while (set[set_len])
		{
			if (set[set_len] == s1[s1_len])
			{
				count++;
				break ;
			}
			set_len++;
		}
		if (set[set_len] == '\0')
			break ;
		set_len = 0;
		s1_len--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	c1;
	size_t	c2;
	size_t	len;
	char	*buf;
	size_t	i;

	if (!s1)
		return (NULL);
	c1 = ft_count1((char *)s1, (char *)set);
	c2 = ft_count2((char *)s1, (char *)set);
	len = ft_strlen((char *)s1);
	i = 0;
	if (c1 == c2 && ft_strlen((char *)s1) == c1)
		return (ft_strdup(""));
	buf = (char *)malloc(sizeof(char) * (len - c1 - c2 + 1));
	if (!buf)
		return (NULL);
	while (i < len - c1 - c2)
	{
		buf[i] = s1[i + c1];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}
/*#include <stdio.h>
int	main()
{
	char s1[] = "       ";
	char set[] = " ";
	printf("%s", ft_strtrim(s1, set));
}*/
