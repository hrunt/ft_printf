/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrynevi <mhrynevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:38:23 by mhrynevi          #+#    #+#             */
/*   Updated: 2024/03/04 15:14:03 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main (void)
{
	char *s1 = "AB";
	char *s2 = "ABZ";
	int i = 4;

	printf ("%d\n", ft_strncmp(s1, s2, i));
	printf ("%d", strncmp(s1, s2, i));
}*/
