/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:03:49 by mrk               #+#    #+#             */
/*   Updated: 2024/03/13 16:14:08 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int				i;
	long long int	result;
	int				sign;

	i = 0;
	result = 0;
	sign = 1;
	while (((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == 32) && nptr[i])
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = 10 * result + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char *s = "-4886";
	printf("%d\n", ft_atoi(s));
	printf("%d", atoi(s));
}*/
