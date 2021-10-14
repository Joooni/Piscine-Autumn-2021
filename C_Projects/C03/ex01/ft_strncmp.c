/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:29:37 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/11 11:19:46 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;
	int				difference;

	counter = 0;
	difference = 0;
	while (s1[counter] != '\0' && s1[counter] != '\0')
	{
		if (counter >= n)
		{
			return (0);
		}
		if (s1[counter] != s2[counter])
		{
			difference = s1[counter] - s2[counter];
			return (difference);
		}
		counter++;

	}
	return (difference);
}

