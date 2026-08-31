/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 10:06:46 by balca             #+#    #+#             */
/*   Updated: 2026/08/27 16:35:20 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//wurzel 9 = 3, 3 mal 3 ist 9
//wurzel 9 modulo x = iwas , iwas mal x ist 9
int	ft_sqrt(int nb)
{
	int	counter;
	int	erg;
	int	boolean;

	boolean = 0;
	counter = 1;
	erg = 0;
	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (boolean == 0 && counter <= nb / 2)
	{
		if (counter * counter == nb)
		{
			erg = counter;
			boolean = 1;
		}
		counter++;
	}
	return (erg);
}

// int main()
// {
// 	int n = ft_sqrt(16);
// 	printf("%d", n);
// }