/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 11:36:44 by balca             #+#    #+#             */
/*   Updated: 2026/08/27 16:07:39 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	stelle;
	int	erg;

	stelle = index;
	erg = 0;
	if (stelle < 0)
	{
		return (-1);
	}
	if (stelle == 0)
	{
		return (0);
	}
	if (stelle == 1)
	{
		return (1);
	}
	if (stelle > 1)
	{
		erg = ft_fibonacci(stelle - 1) + ft_fibonacci(stelle - 2);
		return (erg);
	}
	return (erg);
}

// int main()
// {
// 	int n = ft_fibonacci(3);
// 	printf("%d", n);
// }