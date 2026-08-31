/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 19:54:18 by balca             #+#    #+#             */
/*   Updated: 2026/08/17 12:22:03 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] > 'Z' || str[n] < 'A')
		{
			return (0);
		}
		n++;
	}
	return (1);
}

// int main()
// {
// 	char test[] = "BERKE";
// 	int n = ft_str_is_uppercase(test);
// 	printf("%d", n);
// }