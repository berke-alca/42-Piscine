/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 18:49:29 by balca             #+#    #+#             */
/*   Updated: 2026/08/25 14:12:50 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int nb)
{
	unsigned int	counter;

	counter = 0;
	while (nb == 0)
	{
		return (0);
	}
	while (counter < nb -1 && s1[counter] == s2 [counter] && s1 [counter])
	{
		counter++;
	}
	return (s1[counter] - s2[counter]);
}
// int main() 
// {
// 	int n = ft_strncmp("adfaa", "d", 1);
// 	printf("%d",n);
// }
