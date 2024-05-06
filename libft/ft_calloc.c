/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:33:08 by mrk               #+#    #+#             */
/*   Updated: 2024/03/13 17:43:26 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb && size && nmemb > (UINT_MAX / size))
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, nmemb * size);
	return (p);
}
/*#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	int *p;
	int i = 4;
	int c = 1;
	int b = 0;
	p = (int *) ft_calloc (i, c);
	while (b < i)
	{
		printf("%d", p[b]);
		b++;
	}
}*/
