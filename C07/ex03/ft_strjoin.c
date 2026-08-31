/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balca <balca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 19:39:43 by balca             #+#    #+#             */
/*   Updated: 2026/08/31 17:42:22 by balca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		counter;
	int		n;
	int		laenge;
	char	**newstring;
	int		counter2;

	counter = 0;
	counter2 = 0;
	while (size != 0)
	{
		while (strs[counter][counter2] != '\0')
		{
			newstring[counter][counter2] == strs[counter][counter2];
			counter2++;
		}
		counter++;
		size--;
	}
}
