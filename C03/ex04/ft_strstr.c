/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:29:43 by logkoege          #+#    #+#             */
/*   Updated: 2024/02/19 16:20:33 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[i])
		{
			i = 0;
			j = 0;
			while (to_find[i])
			{
				if (str[i] != to_find[i])
					j++;
				i++;
			}
			if (j == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
