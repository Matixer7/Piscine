#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = 0;
	//if (base_check(base) == 1)
	//    return;
	while (base[size])
		size++;
	if (nbr < 0)
	{
		write(1, "-", 1);
		write(1, &base[nbr / size], 1);
	}
	else
		write(1, &base[nbr / size], 1);
	
}

int main(void)
{
	ft_putnbr_base(8, "01");
}