/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 08:52:06 by coder             #+#    #+#             */
/*   Updated: 2021/10/06 13:34:49 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);
void	ft_print_doubledigit(int number);
void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_doubledigit(int number)
{
	int	decimal_number;
	int	single_number;

	if (number > 9)
	{
		decimal_number = number / 10;
		single_number = number % 10;
		ft_putchar(decimal_number + '0');
		ft_putchar(single_number + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(number + '0');
	}
}

void	ft_print_comb2(void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	second_number = 1;
	while (first_number < 99)
	{
		while (second_number < 100)
		{
			if (first_number != second_number)
			{
				ft_print_doubledigit(first_number);
				ft_putchar(' ');
				ft_print_doubledigit(second_number);
				if ((first_number != 98) || (second_number != 99))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			second_number++;
		}
		second_number = ++first_number;
	}
}
