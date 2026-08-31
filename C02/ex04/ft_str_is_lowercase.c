/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 19:40:46 by balca             #+#    #+#             */
/*   Updated: 2026/08/17 12:21:59 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] > 'z' || str[n] < 'a')
		{
			return (0);
		}
		n++;
	}
	return (1);
}

// int main()
// {
// 	char test[] = "ber2ke";
// 	int n = ft_str_is_lowercase(test);
// 	printf("%d", n);
// }