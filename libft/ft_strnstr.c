/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:43:20 by mrk               #+#    #+#             */
/*   Updated: 2024/03/13 13:59:43 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	bg;
	size_t	lt;
	size_t	length;

	bg = 0;
	lt = 0;
	if (!big && !len)
		return (NULL);
	if (!*little)
		return ((char *)big);
	length = ft_strlen((char *) little);
	while (big[bg] && (bg + length) <= len)
	{
		if (big[bg] == little[lt] && ft_strncmp(big + bg, little, length) == 0)
			return ((char *)big + bg);
		bg++;
	}
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	char big[0];
	char little[] ="dolor";
	printf("%s\n", ft_strnstr(NULL, "", 0));
}*/
