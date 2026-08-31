/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 19:11:33 by balca             #+#    #+#             */
/*   Updated: 2026/08/22 15:45:57 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
// int main()
// {
// 	int a = 21;
// 	int b = 5;
// 	int *pA = &a;
// 	int *pB = &b;
// 	ft_ultimate_div_mod(pA, pB);
// 	printf("Division:%d\n", a);
// 	printf("Modulo:\t%d ", b);
// }