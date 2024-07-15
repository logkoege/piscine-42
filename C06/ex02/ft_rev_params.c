/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:49:48 by logkoege          #+#    #+#             */
/*   Updated: 2024/02/24 17:54:17 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	argc--;
	while (argc != 0)
	{
		i = 0;
		while (argv[argc][i])
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
		argc--;
		write(1, "\n", 1);
	}
	return (0);
}
