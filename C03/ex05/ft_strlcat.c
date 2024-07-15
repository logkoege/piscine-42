/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:42:12 by logkoege          #+#    #+#             */
/*   Updated: 2024/02/19 17:33:51 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[k])
		k++;
	while (src[j])
		j++;
	if (size <= k)
		j = j + size;
	else
		j = j + k;
	while (src[i] && size > (k + 1))
	{
		dest[k] = src[i];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (j);
}
