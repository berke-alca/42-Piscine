/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:18:08 by balca             #+#    #+#             */
/*   Updated: 2026/08/26 16:46:54 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_putnbr(int nbr)
{
	char		print;
	char		nb;
	long long	div;

	nb = nbr;
	div = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb / div >= 10)
		div *= 10;
	while (div > 0)
	{
		print = (nb / div) + '0';
		write(1, &print, 1);
		nb %= div;
		div /= 10;
	}
}

// int main()
// {
// 	ft_putnbr(-2147483648);
// }