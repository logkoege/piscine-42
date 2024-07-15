/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:22:56 by logkoege          #+#    #+#             */
/*   Updated: 2024/03/07 18:35:13 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(int size, char strs, char sep)
{
	int	i;
	int	j;
	int	total;
	int	a;

	j = 0;
	total = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			total++;
			i++;
		}
		j++;
	}
	a = 0;
	while (sep[a])
	{
		a++;
	}
	a = a (size - 1);
	total = total + a;
	return (total);
}

void	ft_sepcat(char sep, char dest, int a)
{
	int	i;
	int	j;
	int	b;

	i = 0;
	b = 0;
	j = 0;
	while (sep[i] != '\0')
	{
		dest[a] = sep[i];
		i++;
		a++;
	}
	j++;
}

void	ft_strcat(int size, char dest, char sep, char strs)
{
	int	i;
	int	j;
	int	a;
	int	b;

	j = 0;
	b = 0;
	a = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			dest[a] = strs[j][i];
			i++;
			a++;
		}
		if (j == size - 1)
			return ;
		j++;
		ft_sepcat(sep, dest, a);
		while (sep[b])
			b++;
		a = a + b;
	}
}

char	ft_strjoin(int size, char **strs, char sep)
{
	char	dest;
	int		total;
	int		a;

	a = 0;
	if (size == 0)
	{
		dest = 0;
		return (dest);
	}
	total = ft_strlen(size, strs, sep);
	dest = malloc(sizeof(char)(total + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcat(size, dest, sep, strs);
	dest[total] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int     main(int argc, char **argv)
{
        printf("%s\n",  ft_strjoin(argc, argv, "__"));
}*/
