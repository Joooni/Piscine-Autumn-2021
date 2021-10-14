/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 07:46:57 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/08 19:16:45 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				counter;
	unsigned int	result;

	counter = 0;
	result = 0;
	while (src[result] != '\0')
	{
		result++;
	}
	while (src[counter] != '\0' && counter < ((int)size - 1))
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[size] = '\0';
	return (result);
}
