/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgumienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:19:48 by mgumienn          #+#    #+#             */
/*   Updated: 2025/07/03 10:19:50 by mgumienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && j < n)
	{
		i++;
		j++;
	}
	if (j == n)
		return (0);
	return (s1[i] - s2[i]);
}

/* int main (void)
{
	#include <stdio.h>
	#include <string.h>
	printf("%d", ft_strncmp("", "", 0));
	printf("\n%d", strncmp("", "", 0));
	
} */
