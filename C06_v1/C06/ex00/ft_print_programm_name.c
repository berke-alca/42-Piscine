/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_programm_name.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:54:11 by balca             #+#    #+#             */
/*   Updated: 2026/08/27 12:07:47 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int	counter;

	counter = 0;
	while (argv[0][counter] != '\0')
	{
		write(1, &argv[0][counter], 1);
		counter ++;
	}
}