/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 18:26:00 by balca             #+#    #+#             */
/*   Updated: 2026/08/31 10:20:14 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_lenght(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	counter++;
	return (counter);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		counter;
	int		laenge;

	counter = 0;
	laenge = ft_lenght(src);
	copy = malloc (laenge);
	if (copy == NULL)
	{
		return (NULL);
	}
	while (src[counter] != '\0')
	{
		copy[counter] = src[counter];
		counter++;
	}
	copy[counter] = '\0';
	return (copy);
}

// int main()
// {
// 	char *real= "berke";
// 	char *fake = ft_strdup(real);
// 	printf("%s", fake);
// 	free(fake);
// }