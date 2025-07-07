/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:21:02 by mgumienn          #+#    #+#             */
/*   Updated: 2025/07/07 19:45:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
   unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
    
	while (dest[i])
    i++;
    if (i + sizeof(src) > size)
        return(i + sizeof(src));
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (sizeof(dest) + sizeof(src)); 
}

/* int	main(void) {
	char	source[] = " World";
	char	destination[17] = "Hello";
	char	*src = source;
	char	*dest = destination;
	char	*p = dest;
	int		i = 0;

	
    printf("%d", ft_strlcat(dest, src, sizeof(destination)));
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
	
} */