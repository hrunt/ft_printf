/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:53:40 by mrk               #+#    #+#             */
/*   Updated: 2024/03/13 16:25:39 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	chk(long long n)
{
	int	i;

	i = 0;
	if (n < 0)
		i = 1;
	else if (n == 0)
	{
		i = 1;
		return (i);
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*cnt(long long n)
{
	int		i;
	char	*ar;

	i = 0;
	if (n < 0 || n == 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	ar = malloc(sizeof(char) * (i + 1));
	if (!ar)
		return (NULL);
	else
		return (ar);
}

char	*ft_itoa(int n)
{
	char		*ar;
	int			i;
	long long	b;

	b = (long long)n;
	ar = cnt (b);
	if (!ar)
		return (NULL);
	i = chk(b);
	if (b == 0)
		ar[i - 1] = 0 + '0';
	ar[i] = '\0';
	if (b < 0)
	{
		ar[0] = '-';
		b *= -1;
	}
	while (b > 0)
	{
		ar[i-- - 1] = (b % 10 + '0');
		b /= 10;
	}
	return (ar);
}
/*#include <stdio.h>
#include <unistd.h>
int main()
{
	char *sd;
	int	i;

	i = 0;

	sd = ft_itoa (2147483648);
	while (sd[i] )
	{
		write (1, &sd[i], 1);
		i++;
	}
}*/
