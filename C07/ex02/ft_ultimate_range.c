/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:34:34 by logkoege          #+#    #+#             */
/*   Updated: 2024/03/07 19:00:54 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	k;

	i = max - min;
	j = 0;
	k = min;
	if (i <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * 1);
	if (range == 0)
		return (-1);
	while (j < max)
	{
		(*range)[j] = k;
		j++;
		k++;
	}
	return (i);
}
