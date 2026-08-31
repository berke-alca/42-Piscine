/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 12:12:22 by balca             #+#    #+#             */
/*   Updated: 2026/08/25 14:40:45 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;
	int	total;

	total = 0;
	counter = 0;
	while (s1 [counter] == s2 [counter] && s1 [counter])
	{
		counter++;
	}
	total = (s1[counter] - s2[counter]);
	return (total);
}
// int main() 
// {
// 	int n = ft_strcmp("a", "b");
// 	printf("%d",n);
// }