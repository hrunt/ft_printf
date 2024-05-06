/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrynevi <mhrynevi@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:18:39 by mrk               #+#    #+#             */
/*   Updated: 2024/04/10 20:01:26 by mhrynevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

static int	hex_count(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (i);
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

static void	ft_hex_2(unsigned int n, char c)
{
	int	result;

	if (n > 0)
	{
		ft_hex_2 (n / 16, c);
		result = n % 16;
		if (result > 9 && c == 'x')
			ft_putchar_fd (result - 10 + 'a', 1);
		else if (result > 9 && c == 'X')
			ft_putchar_fd (result - 10 + 'A', 1);
		else
			ft_putnbr_fd (result, 1);
	}
}

int	ft_hex(unsigned int n, char c)
{
	int	i;

	i = hex_count (n);
	if (n == 0)
	{
		ft_putchar_fd ('0', 1);
		return (1);
	}
	if (n > 0)
	{
		ft_hex_2 (n, c);
	}
	return (i);
}
/*int	main()
	ft_putnbr_fd(10,2);
}*/
