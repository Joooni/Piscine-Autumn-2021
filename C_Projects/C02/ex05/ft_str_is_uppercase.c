/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:06:22 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/07 08:57:56 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] == '\0')
	{
		return (1);
	}
	while (str[counter] != '\0')
	{
		if (str[counter] < 'A' || str[counter] > 'Z')
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
