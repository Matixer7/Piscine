/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:20:24 by mgumienn          #+#    #+#             */
/*   Updated: 2025/07/07 13:58:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	char			*p;

	p = dest;
	i = 0;
	j = 0;
	while (*p++ && src[0])
		i++;
	while (j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
int	main(void) {
	char	source[] = " World";
	char	destination[] = "Hello";
	char	*src = source;
	char	*dest = destination;
	int		i = 0;

	ft_strncat(dest, src, 10);
	while (*dest++)
	{
		write(1, &destination[i], 1);
		i++;
	}
	
}

