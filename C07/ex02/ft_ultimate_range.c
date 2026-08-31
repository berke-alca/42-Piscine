/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 18:24:36 by balca             #+#    #+#             */
/*   Updated: 2026/08/31 17:42:13 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	*range = malloc(sizeof(int) * (max - min + 1));
	if (*range == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (i);
}

// int main()
// {
// 	int *zahl;
// 	int n = ft_ultimate_range(&zahl, 5, 10);
// 	printf("%d",n);
// }