/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:18:46 by logkoege          #+#    #+#             */
/*   Updated: 2024/03/06 16:35:09 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchart(char a, char b, char c1)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c1 + 48);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_putchart(i, j, k);
				if (i == 7 && j == 8 && k == 9)
					return ;
				ft_putchar(',');
				ft_putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}
}
