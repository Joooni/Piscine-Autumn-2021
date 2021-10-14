/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:11:29 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/13 08:24:45 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int counter;
	int difference;

	counter = 0;
	difference = 0;	
	while(s1[counter]!='\0' || s2[counter]!='\0')
	{
		if (s1[counter] != s2[counter])
		{
			difference = s1[counter] - s2[counter];
			return (difference);
		}
		counter++;
	}
	return (difference);
}