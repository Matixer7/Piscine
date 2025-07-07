/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:20:24 by mgumienn          #+#    #+#             */
/*   Updated: 2025/07/07 18:25:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	char			x;

	i = 1;
	j = 0;
	while (dest[i])
		i++;
	while (j < nb && src[j] != '\0')
	{
		x = src[j];
		dest[i] = x;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/* int	main(void) {
	char	source[] = " World";
	char	destination[] = "Hello";
	char	*src = source;
	char	*dest = destination;
	char	*p = dest;
	int		i = 0;

	ft_strncat(dest, src, 3);
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
	
}

 */