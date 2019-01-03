/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viboujem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 18:37:08 by viboujem          #+#    #+#             */
/*   Updated: 2018/07/26 23:53:06 by viboujem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		count_desc;
	int		count_ris;

	i = 0;
	count_desc = 1;
	count_ris = 1;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			count_desc = -1;
		if ((*f)(tab[i], tab[i + 1]) < 0)
			count_ris = -1;
		i++;
	}
	if (count_ris == 1 || count_desc == 1)
		return (1);
	return (0);
}
