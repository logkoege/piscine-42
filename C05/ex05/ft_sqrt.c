/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:29:11 by logkoege          #+#    #+#             */
/*   Updated: 2024/02/29 15:00:06 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	pti;
	int	gra;
	int	mid;
	int	i;

	pti = 0;
	gra = 46340;
	i = 0;
	mid = (pti + gra) / 2;
	if (gra * gra == nb)
		return (gra);
	while (i < 25)
	{
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb)
			pti = mid;
		else if (mid * mid > nb)
			gra = mid;
		mid = (pti + gra) / 2;
		i++;
	}
	return (0);
}
