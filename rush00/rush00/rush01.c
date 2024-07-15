/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yenaiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:05:06 by yenaiji           #+#    #+#             */
/*   Updated: 2024/02/18 08:47:02 by yenaiji          ###   ########.fr       */
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
			if ((a == 1 && b == 1) || (a == x && b == y))
				ft_putchar('/');
			else if ((a == 1 && b == y) || (a == x && b == 1))
				ft_putchar('\\');
			else if ((b == 1 || b == y) || (a == 1 || a == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
