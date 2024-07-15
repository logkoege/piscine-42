/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:54:46 by logkoege          #+#    #+#             */
/*   Updated: 2024/02/24 18:22:20 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	sort(char **argv, int *find, int *i)
{
	char	*tmp;

	if (ft_strcmp(argv[*i], argv[*i + 1]) > 0)
	{
		tmp = argv[*i];
		argv[*i] = argv[*i + 1];
		argv[*i + 1] = tmp;
		*find = 1;
	}
}

int	main(int argc, char **argv)
{
	int	find;
	int	i;

	find = 1;
	while (find)
	{
		find = 0;
		i = 0;
		while (++i < argc - 1)
		{
			sort(argv, &find, &i);
		}
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
	}
	return (0);
}
