#include <unistd.h>
#include <stdio.h>

int	odd_or_even(char *str)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (str[i] && (str[i] == '+'  || str[i] == '-'))
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	return (j % 2);
}

int	ft_atoi(char *str)
{ 
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] == '-' || str[i] == '+')
	i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	if (odd_or_even(str) == 1)
		n = -n;
	return (n);
}

/* int	main(int argc, char *argv[])
{
	printf("%d", ft_atoi(argv[1]));
	return argc;
} */
