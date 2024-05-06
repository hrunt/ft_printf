/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrynevi <mhrynevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:33:32 by mhrynevi          #+#    #+#             */
/*   Updated: 2024/03/04 15:20:50 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
/*#include <stdio.h>
int	main(void)
{
	
	char c2;
	c2 = 0;
	while (c2 != 127)
	{
		printf("%d", c2);
		printf("%s", " ");
		printf("%d", ft_isalnum (c2));
		printf("%s", "\n");
		c2++;
	}
}*/
