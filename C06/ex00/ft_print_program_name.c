/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:16:25 by logkoege          #+#    #+#             */
/*   Updated: 2024/02/26 18:11:15 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argc--;
	if (argc == 0)
	{
		while (argv[argc][i])
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
