/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 08:34:09 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/08 11:09:32 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;
	unsigned int	src_len;

	counter = 0;
	src_len = ft_strlen(src);
	while (src[counter] != '\0' && counter < n)
	{
		if(counter > src_len - 1)
		{
			dest[counter] = '\0';
		}
		else
		{
		dest[counter] = src[counter];
		counter++;
		}
	}
	return (dest);
}

unsigned int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}