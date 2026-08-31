/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 13:42:51 by balca             #+#    #+#             */
/*   Updated: 2026/08/26 15:56:33 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str [counter] != '\0')
	{
		counter++;
	}
	write(1, str, counter);
}

// int main()
// {
// 	ft_putstr("berke");
// }