/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:20:24 by mgumienn          #+#    #+#             */
/*   Updated: 2025/07/07 13:05:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	unsigned int		j;
	char	*p;
	char	*q;

	p = dest;
	q = src;
	i = 0;
	j = 0;
	while (*p++ && src[0])
		i++;
	while (*q++ && j - 1 < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
