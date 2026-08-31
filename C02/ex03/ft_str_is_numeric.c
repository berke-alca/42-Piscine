/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 19:14:51 by balca             #+#    #+#             */
/*   Updated: 2026/08/17 12:21:54 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i]) < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main ()
// {
// 	char test[] = "12f";
// 	int n = ft_str_is_numeric(test);
// 	printf("%d", n);
// }
