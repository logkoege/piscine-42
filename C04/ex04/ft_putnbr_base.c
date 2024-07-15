/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 23:02:54 by logkoege          #+#    #+#             */
/*   Updated: 2024/05/13 01:50:13 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!str || str[1] == '\0')
		return (0);
	while (str[i])
	{
		j = i + 1;
		if (str[i] == '-' || str[i] == '+')
			return (0);
		if (str[i] < 32 || str[i] > 126)
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	lenbase;
	int	ff[100];

	i = 0;
	lenbase = 0;
	if (ft_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			putchar('-');
		}
		while (base[lenbase])
			lenbase++;
		while (nbr)
		{
			ff[i] = nbr % lenbase;
			nbr = nbr / lenbase;
			i++;
		}
		while (--i >= 0)
			putchar(base[ff[i]]);
	}
}
