/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:20:24 by mgumienn          #+#    #+#             */
/*   Updated: 2025/07/07 19:58:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void) {
	char	source[] = "World";
	char	destination[] = "Hello";
	char	*src = source;
	char	*dest = destination;
	int		i = 0;

	ft_strncat(dest, src, 5);
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	
}*/