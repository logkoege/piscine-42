/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdemars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:48:45 by thdemars          #+#    #+#             */
/*   Updated: 2024/02/18 10:51:29 by yenaiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

void	ft_putchar(char c);

int	main(void)
{
	rush(5, 3);
	rush(10, 15);
	rush(20, 5);
	rush(0, 0);
	rush(-5, 5);
	rush(5, -5);
	return (0);
}
