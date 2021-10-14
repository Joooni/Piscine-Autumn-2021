/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:41:28 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/14 08:58:07 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <assert.h>

int	ft_atoi(char *str);

int    main(void)
{
    assert(ft_atoi("-1") == -1);
    assert(ft_atoi("42") == 42);
    assert(ft_atoi("0") == 0);
    assert(ft_atoi("-0") == 0);
    assert(ft_atoi("+0") == 0);
    assert(ft_atoi("42") == 42);
    assert(ft_atoi("--1") == 1);
    assert(ft_atoi("--109") == 109);
    assert(ft_atoi("---1") == -1);
    assert(ft_atoi("        -+++-+-+++1") == -1);
    assert(ft_atoi("    +-++-++--+-42") == -42);
    assert(ft_atoi(" ---+--+1234ab567") == -1234);
    assert(ft_atoi(" --+--+2147483647") == 2147483647);
    assert(ft_atoi(" ---+--+2147483648") == -2147483648);
    assert(ft_atoi(" ---+--+A") == 0);
}
