/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:16:27 by mrk               #+#    #+#             */
/*   Updated: 2024/03/04 14:38:55 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			i;

	temp1 = (unsigned char *) s1;
	temp2 = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (temp1[i] == temp2[i] && i < n - 1)
	{
		i++;
	}
	return (temp1[i] - temp2[i]);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[] = "ABC";
	char s2[] = "ABZ";
	int i = 0;
	printf ("%d\n", ft_memcmp(s1, s2, i));
	printf ("%d", memcmp(s1,s2,i));
}*/
