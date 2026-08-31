/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 11:36:23 by balca             #+#    #+#             */
/*   Updated: 2026/08/27 11:39:11 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	zahl;
	int	erg;

	zahl = nb;
	erg = 1;
	if (zahl == 0 || zahl == 1)
	{
		return (1);
	}
	else if (zahl < 0)
	{
		return (0);
	}
	else
	{
		erg = zahl * ft_recursive_factorial(zahl -1);
	}
	return (erg);
}

// int main()
// {
// 	int n = ft_recursive_factorial(10);
// 	printf("%d",n);
// }