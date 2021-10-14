/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 09:01:55 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/08 09:31:04 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int		counter;
	int		result;
	int		to_find_len;

	counter = 0;
	to_find_len = ft_strlen(to_find);
	while (str[counter] != '\0')
	{
		if (str[counter] == to_find[0])
		{
			result = ft_strncmp(&str[counter], &to_find[0], to_find_len);
			if (result == 0)
			{
				return &str[counter];
			}
		}
		counter++;
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;
	int				difference;

	counter = 0;
	difference = 0;
	while (s1[counter] != '\0' && s1[counter] != '\0')
	{
		if (counter >= n)
		{
			return (0);
		}
		if (s1[counter] != s2[counter])
		{
			difference = s1[counter] - s2[counter];
			return (difference);
		}
		counter++;

	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}