/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 10:34:18 by balca             #+#    #+#             */
/*   Updated: 2026/08/25 14:49:11 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	terminatordest;
	int	counter;

	terminatordest = 0;
	counter = 0;
	while (dest[terminatordest] != '\0')
	{
		terminatordest++;
	}
	while (nb != 0 && src[counter] != '\0')
	{
		dest[terminatordest] = src[counter];
		counter ++;
		terminatordest++;
		nb--;
	}
	dest[terminatordest] = '\0';
	return (dest);
}
// int main()
// {
// 	char name[3] = "sdf";
// 	char alter[] = "12323";
// 	char *alles = ft_strncat(name, alter, 2);
// 	printf("%s\n", alles);
// }