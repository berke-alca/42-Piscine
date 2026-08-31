/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 15:58:02 by balca             #+#    #+#             */
/*   Updated: 2026/08/31 10:20:56 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	counter;
	int	total;

	total = max - min ;
	counter = 0;
	if (min >= max)
	{
		return (NULL);
	}
	ptr = (int *) malloc (total * 4 + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (total != 0)
	{
		ptr[counter] = min;
		total--;
		counter++;
		min++;
	}
	return (ptr);
}
	// int main()
	// {
	// 	int *p = ft_range (5, 10);
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 	printf("%d", p[i]);
	// 	}
	// 	free (p);
	// }