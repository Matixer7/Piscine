/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:21:02 by mgumienn          #+#    #+#             */
/*   Updated: 2025/07/07 20:09:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	if (size <= sizeof(dest))
		return (size + sizeof(src));
	while (src[i] && j < size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (sizeof(dest) + sizeof(src));
}

/*int	main(void) {
	char	source[] = "Test";
	char	destination[17] = "Test";
	char	*src = source;
	char	*dest = destination;
	int		i = 0;

	
    printf("[%d]: ", ft_strlcat(dest, src, 100));
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}	
}*/