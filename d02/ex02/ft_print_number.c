/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 23:46:04 by aourika           #+#    #+#             */
/*   Updated: 2018/07/11 15:02:38 by aourika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_number(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		ft_putchar(a);
		a++;
	}
}