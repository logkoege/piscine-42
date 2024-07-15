/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yenaiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:07:41 by yenaiji           #+#    #+#             */
/*   Updated: 2024/02/18 08:47:30 by yenaiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x < 0 || y < 0)
		return ;
	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == 1 && b == y))
				ft_putchar('A');
			else if ((a == x && b == 1) || (a == x && b == y))
				ft_putchar('C');
			else if ((b == 1 || b == y) || (a == 1 || a == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
