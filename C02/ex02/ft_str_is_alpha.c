/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 15:06:56 by balca             #+#    #+#             */
/*   Updated: 2026/08/17 12:21:50 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] < 'A') || (str[n] > 'Z' && str[n] < 'a') || str[n] > 'z')
		{
			return (0);
		}
		n++;
	}
	return (1);
}

// int main()
// {
// 	char test[] = "Berke";
// 	int n = ft_str_is_alpha(test);
// 	printf("%d", n);
// }