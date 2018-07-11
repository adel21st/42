/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printA.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 02:55:05 by aourika           #+#    #+#             */
/*   Updated: 2018/07/11 11:52:43 by aourika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_printA(void)
{
	int a;
	int b;

	a = 03;
	b = 0;
	while (b < a)
	{	
		ft_putchar(b /10 + '0');
		ft_putchar(b %10 + '0');
		ft_putchar(' ');
		b++;
	}

	a = 03;
	while (a <= 99)
	{
		ft_putchar(a /10 + '0');
		ft_putchar(a %10 + '0');
		ft_putchar(' ');
		a++;
	}
}

int main(void)
{
	ft_printA();
}
