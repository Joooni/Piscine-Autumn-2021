/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 08:33:10 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/14 17:04:11 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		is_valid_base(char *base, int size);
void	ft_putnbr_write(int nb, char *base, int size);

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = 0;
	while (base[size])
		size++;
	if (!(is_valid_base(base, size)))
		return ;
	ft_putnbr_write(nbr ,base, size);
}

int	is_valid_base(char *base, int size)
{
	long	i;
	int	current_letter;

	i = 0;
	current_letter = 0;
	if (size < 2)
		return (0);
	while (current_letter < size)
	{
		while (i < size)
		{
			if (current_letter == i)
				i++;
			if (base[current_letter] == base[i]
				|| base[i] == '+' || base[i] == '-')
				return (0);
			i++;
		}
		current_letter++;
		i = 0;
	}
	return (1);
}

void	ft_putnbr_write(int nb, char *base, int size)
{
	long	i;
	char	c;
	
	i = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		i *= -1;
	}
	if (i >= size)
		ft_putnbr_write(i / size, base, size);
	c = base[i % size];
	write(1, &c, 1);
	
}
