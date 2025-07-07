/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgumienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:20:24 by mgumienn          #+#    #+#             */
/*   Updated: 2025/07/03 10:20:25 by mgumienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				destlen;
	char			*p;

	p = dest;
	destlen = 0;
	while (*p++)
		destlen++;
	while (dest[destlen] && i < nb)
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}
	return (dest);
}
