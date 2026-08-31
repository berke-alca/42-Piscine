/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 11:36:35 by balca             #+#    #+#             */
/*   Updated: 2026/08/27 16:06:30 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	counter;
	int	erg;

	counter = 0;
	erg = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power != 0)
	{
		erg = erg * nb;
		power--;
	}
	return (erg);
}

// int main()
// {
// 	int n = ft_iterative_power(-2,2);
// 	printf("%d", n);
// }