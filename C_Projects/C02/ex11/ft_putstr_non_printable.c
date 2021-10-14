/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 08:58:33 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/08 10:46:04 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_dec_to_hex(int n);
char	*ft_strcpy(char *dest, char *src);

void	ft_putstr_non_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 32)
		{
			write(1, &(str[counter]), 1);
			counter++;
		}
		else
		{
			write(1, "\\", 1);
			ft_dec_to_hex(str[counter]);
			counter++;
		}
	}
}

void	ft_dec_to_hex(int n)
{
	char	hex[17];
	char	w;

	ft_strcpy(hex, "0123456789abcdef");
	w = '0';
	if (n == 0)
	{
		write(1, &w, 1);
		return ;
	}
	else
	{
		ft_dec_to_hex(n / 16);
		w = hex[(n % 16)];
		write (1, &w, 1);
	}
} 

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
