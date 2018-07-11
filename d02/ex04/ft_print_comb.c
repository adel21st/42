/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 17:57:29 by aourika           #+#    #+#             */
/*   Updated: 2018/07/11 15:26:03 by aourika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print(int a, int b, int c)
{
	ft_putchar(48 + a);
	ft_putchar(48 + b);
	ft_putchar(48 + c);
	if (!(a == 7 && b == 8 && c == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
