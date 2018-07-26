/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 02:30:16 by aourika           #+#    #+#             */
/*   Updated: 2018/07/26 02:30:23 by aourika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;
	int begin;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		begin = i;
		while ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= '0' && str[i] <= '9'))
		{
			if (j == 0 && str[j + begin] >= 'a' && str[j + begin] <= 'z')
				str[j + begin] = str[j + begin] - 32;
			else if (str[j + begin] >= 'A' && str[j + begin] <= 'Z')
				str[j + begin] = str[j + begin] + 32;
			j++;
			i++;
		}
		j = 0;
		i++;
	}
	return (str);
}
