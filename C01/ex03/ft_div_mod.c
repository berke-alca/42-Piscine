/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 18:48:19 by balca             #+#    #+#             */
/*   Updated: 2026/08/17 20:47:19 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main()
// {

// 	int res1 = 0;
// 	int res2 = 0;
// 	int *pDiv = &res1;
// 	int *pmod = &res2;

// 	ft_div_mod(10, 3, pDiv, pmod);
// 	printf("Divison Res : %d", res1);
// 	printf("Modulo  Res : %d", res2);
// }
