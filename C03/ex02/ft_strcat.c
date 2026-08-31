/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 10:14:16 by balca             #+#    #+#             */
/*   Updated: 2026/08/24 12:19:08 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	terminatordest;
	int	terminatorsrc;
	int	counter;

	terminatordest = 0;
	terminatorsrc = 0;
	counter = 0;
	while (dest[terminatordest] != '\0')
	{
		terminatordest++;
	}
	while (src[counter] != '\0' )
	{
		dest[terminatordest] = src[counter];
		counter ++;
		terminatorsrc ++;
		terminatordest++;
	}
	dest[terminatordest] = '\0';
	return (dest);
}

// int main()
// {
// 	char name[222] = "berke";
// 	char alter[] = "123";

// 	char *alles = ft_strcat(name, alter);
// 	printf("%s", alles);
// }