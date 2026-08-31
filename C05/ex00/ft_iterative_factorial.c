/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 11:36:55 by balca             #+#    #+#             */
/*   Updated: 2026/08/27 11:36:58 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	erg;

	erg = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		erg = erg * nb;
		nb--;
	}
	return (erg);
}

// int main()
// {
// 	int n = ft_iterative_factorial(4);
// 	printf("%d", n);
// }