/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 13:46:34 by aourika           #+#    #+#             */
/*   Updated: 2018/07/26 02:34:21 by aourika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((src[i] || dest[i]) && i < n)
	{
		dest[i] = src[i];
		i++;
		dest[i] = '\0';
	}
	return (dest);
}
