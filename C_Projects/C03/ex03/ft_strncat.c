/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 08:51:53 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/08 09:00:06 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int				find_end_dest;
	unsigned int	counter;

	find_end_dest = 0;
	counter = 0;
	while (dest[find_end_dest] != '\0')
	{
		find_end_dest++;
	}
	while (src[counter] != '\0' && counter < n)	
	{
		dest[find_end_dest] = src[counter];
		find_end_dest++;
		counter++;
	}
	dest[find_end_dest] = '\0';
	return (dest);
}