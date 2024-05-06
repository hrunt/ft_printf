/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:41:11 by mrk               #+#    #+#             */
/*   Updated: 2024/03/04 14:32:05 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*s2;
	size_t	i;

	s2 = s;
	i = 0;
	while (i < n)
	{
		s2[i] = '\0';
		i++;
	}
}
/*#include <unistd.h>
int	main(void)
{
	char s[6] = "ABZHKO";
	int i = 6;
	char *p;
	
	ft_bzero (s,4);
	while (i > 0)
	{
		write (1, &s[i], 1);
		i--;
	}
}*/	
