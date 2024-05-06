/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:18:39 by mrk               #+#    #+#             */
/*   Updated: 2024/03/13 14:07:27 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	nbr_count(int n)
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

int	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = nbr_count (n);
	if (n == -2147483648)
	{
		ft_putchar_fd ('-', fd);
		ft_putchar_fd ('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putnbr_fd (n % 10, fd);
	}
	else
		ft_putchar_fd (n + '0', fd);
	return (i);
}
/*int	main()
{
	ft_putnbr_fd(10,1);
}*/