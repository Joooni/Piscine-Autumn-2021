/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:49:57 by coder             #+#    #+#             */
/*   Updated: 2021/10/02 14:10:18 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_pos_nbr(int nbr);
void	ft_putchar(char c);
void	ft_neg_nbr(int nbr);
void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_pos_nbr(int nbr)
{
	char	c;

	c = 48;
	if (nbr == 0)
	{
		return ;
	}
	else
	{
		ft_pos_nbr(nbr / 10);
		c = c + nbr % 10;
		ft_putchar(c);
		return ;
	}
}

void	ft_neg_nbr(int nbr)
{
	char	c;

	c = 48;
	if (nbr == 0)
	{
		ft_putchar('-');
		return ;
	}
	else
	{
		ft_neg_nbr(nbr / 10);
		c = c + nbr % 10;
		ft_putchar(c);
		return ;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
	}
	else if (nb > 0)
	{
		ft_pos_nbr(nb);
	}
	else if (nb < 0)
	{
		ft_neg_nbr(-nb);
	}
}
