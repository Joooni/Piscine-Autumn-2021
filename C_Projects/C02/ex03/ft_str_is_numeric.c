/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:45:59 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/06 19:01:07 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] == '\0')
	{
		return (1);
	}
	while (str[counter] != '\0')
	{
		if (str[counter] < '0' || str[counter] > '9')
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
