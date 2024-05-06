/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrynevi <mhrynevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:34:28 by mhrynevi          #+#    #+#             */
/*   Updated: 2024/03/13 16:14:44 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	else
		return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *s = "ABCDJ";
	int i = 3;
	printf("%p\n", ft_strchr(s,i));
	printf("%p", strchr(s,i));
}*/
