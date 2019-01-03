/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viboujem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 17:42:47 by viboujem          #+#    #+#             */
/*   Updated: 2018/07/26 23:48:49 by viboujem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*str;

	i = 0;
	str = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		str[i] = (*f)(tab[i]);
		i++;
	}
	return (str);
}
