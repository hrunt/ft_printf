/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putundec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrynevi <mhrynevi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:18:39 by mrk               #+#    #+#             */
/*   Updated: 2024/03/28 12:26:00 by mhrynevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	nbr_count(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
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

int	ft_putundec(unsigned int n, int fd)
{
	int	j;

	j = nbr_count (n);
	if (n > 9)
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putnbr_fd (n % 10, fd);
	}
	else
		ft_putchar_fd (n + '0', fd);
	return (j);
}
/*int	main()
{
	ft_putnbr_fd(10,1);
}*/
