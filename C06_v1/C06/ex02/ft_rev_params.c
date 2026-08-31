/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 12:23:39 by balca             #+#    #+#             */
/*   Updated: 2026/08/27 12:39:07 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	counter;

	while (argc > 1)
	{
		counter = 0;
		while (argv[argc - 1][counter])
		{
			write(1, &argv[argc - 1][counter], 1);
			counter++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
