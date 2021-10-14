/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:55:50 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/07 08:58:21 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str);
int		ft_char_is_alphanumeric(char c);

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	ft_strlowcase(str);
	while (str[counter])
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			if (!(ft_char_is_alphanumeric(str[counter - 1])))
			{
				str[counter] -= 32;
			}
		}
		counter++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			str[counter] += 32;
		}
		counter++;
	}
	return (str);
}

int	ft_char_is_alphanumeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
