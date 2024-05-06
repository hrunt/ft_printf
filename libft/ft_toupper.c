/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrynevi <mhrynevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:22:04 by mhrynevi          #+#    #+#             */
/*   Updated: 2024/03/04 15:22:29 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
/*#include <stdio.h>
#include <ctype.h>
int	main (void)
{
	int a = 'a';
	printf ("%d\n", ft_toupper(a));
	printf ("%d", toupper (a));
}*/
