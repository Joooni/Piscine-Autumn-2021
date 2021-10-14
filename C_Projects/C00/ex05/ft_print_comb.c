/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 21:34:00 by coder             #+#    #+#             */
/*   Updated: 2021/10/04 19:38:35 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);
void	ft_comb_three_numbers(int first, int second, int third);
void	ft_print_comb(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_comb_three_numbers(int first, int second, int third)
{
	ft_putchar(first);
	ft_putchar(second);
	ft_putchar(third);
	 if (first != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_comb_three_numbers(a, b, c);
				c++;
			}
			c = ++b + 1;
		}
		b = ++a;
	}
}	
