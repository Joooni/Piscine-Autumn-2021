/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:00:04 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/11 12:34:28 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				find_end_dest;
	unsigned int	counter;
	int				len_dest;

	find_end_dest = 0;
	counter = 0;
	while (dest[find_end_dest] != '\0')
	{
		find_end_dest++;
	}
	len_dest = find_end_dest;
	while (src[counter] != '\0' && counter < len_dest - size)	
	{
		dest[find_end_dest] = src[counter];
		find_end_dest++;
		counter++;
	}
	dest[find_end_dest] = '\0';
	return (len_dest + size);
}