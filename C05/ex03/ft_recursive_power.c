/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 11:36:39 by balca             #+#    #+#             */
/*   Updated: 2026/08/27 11:39:31 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	zahl;
	int	potenz;
	int	erg;

	erg = 1;
	zahl = nb;
	potenz = power;
	if (potenz < 0)
	{
		return (0);
	}
	if (potenz == 0)
	{
		return (1);
	}
	if (potenz > 0)
	{
		erg = zahl * ft_recursive_power(zahl, potenz - 1);
	}
	return (erg);
}

// int main()
// {
// 	int n = 3;
// 	int power = 2;
// 	int ausgabe = ft_recursive_power(n, power);
// 	printf("%d", ausgabe);
// }