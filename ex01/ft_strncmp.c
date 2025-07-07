/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:19:48 by mgumienn          #+#    #+#             */
/*   Updated: 2025/07/07 18:51:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			*p1;
	char			*p2;

	p1 = s1;
	p2 = s2;
	i = 0;
	if (n <= 0)
		return (0);
	if (!p2[0])
		return (s1[0] - 0);
	if (!p1[0])
		return (0 - s2[0]);
	while (*p2++ && i < n && *p1++)
	{
		if (s1 == s2)
			return (0);
		else if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

/* int main (void)
{
	#include <stdio.h>
	#include <string.h>
	printf("%d", ft_strncmp("", "", 0));
	printf("\n%d", strncmp("", "", 0));
	
} */
