/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 19:04:41 by balca             #+#    #+#             */
/*   Updated: 2026/08/27 12:22:41 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	counter;
	int	n;

	n = 1;
	counter = 0;
	while (argc != 1)
	{
		while (argv[n][counter] != '\0')
		{
			write(1, &argv[n][counter], 1);
			counter++;
		}
		write(1, "\n", 1);
		counter = 0;
		n++;
		argc--;
	}
}
