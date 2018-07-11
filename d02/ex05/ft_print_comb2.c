/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printA.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 02:55:05 by aourika           #+#    #+#             */
/*   Updated: 2018/07/11 12:32:24 by aourika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print(int a, int b)
{
					ft_putchar(a /10 + '0');
					ft_putchar(a %10 + '0');
					ft_putchar(' ');
					ft_putchar(b /10 + '0');
					ft_putchar(b %10 + '0');
					if (a < 98 )
					{
						ft_putchar(',');
					}
}

void ft_printA(void)
{
	int a;
	int b;

	a ='0';
	while (a <= 99)
		{
			b = a + 1;
			while(b <= 99)
			{
				ft_print(a , b);
				b++;
			}
			a++;
		}		
}

int main(void)
{
	ft_printA();
}
