/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_atoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:56:07 by aourika           #+#    #+#             */
/*   Updated: 2018/07/18 12:36:27 by aourika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int n;
	int nb;

	i = 0;
	n = 1;
	nb = 0;
	if (str[i] < 33)
		i++;
	if (str[i] == '-')
		n = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		nb *= 10;
		nb += (str[i] - '0');
		i++;
	}
	return (nb * n);
}
