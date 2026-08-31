/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 11:40:04 by balca             #+#    #+#             */
/*   Updated: 2026/08/18 13:10:33 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < 32 || str[counter] > 126)
		{
			return (0);
		}
		counter ++;
	}
	return (1);
}
// int main()
// {
// 	char text[] = "tEst34_";
// 	int n = ft_str_is_printable(text);
// 	printf("%d", n);
// }