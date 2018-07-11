/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 23:36:34 by aourika           #+#    #+#             */
/*   Updated: 2018/07/11 11:48:41 by aourika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	u;

	u = 'z';
	while (u >= 'a')
	{
		ft_putchar(u);
		u--;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
