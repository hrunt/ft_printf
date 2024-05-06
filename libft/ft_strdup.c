/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:30:30 by mrk               #+#    #+#             */
/*   Updated: 2024/03/04 14:40:07 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ptr;

	ptr = (char *)malloc(((ft_strlen((char *)s)) + 1) * sizeof(char));
	i = 0;
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = (char) s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*#include <stdio.h>
int	main()
{
	char s[] = "ABCD";
	char *p;

	p = ft_strdup(s);
	printf("%s", p);
}*/	
