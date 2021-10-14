/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 08:16:02 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/11 11:24:18 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	find_end_dest;
	int	counter;

	find_end_dest = 0;
	counter = 0;
	while (dest[find_end_dest] != '\0')
	{
		find_end_dest++;
	}
	while (src[counter] != '\0')
	{
		dest[find_end_dest] = src[counter];
		find_end_dest++;
		counter++;
	}
	dest[find_end_dest] = '\0';
	return (dest);
}
