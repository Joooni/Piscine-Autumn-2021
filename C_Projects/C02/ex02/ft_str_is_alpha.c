/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:04:24 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/07 07:50:20 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] == '\0')
	{
		return (1);
	}
	while (str[counter] != '\0')
	{
		if (str[counter] < 'a' || str[counter] > 'z')
		{
			if (str[counter] < 'A' || str[counter] > 'Z')
			{
				return (0);
			}
		}
		counter++;
	}
	return (1);
}
