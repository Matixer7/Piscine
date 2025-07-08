#include <unistd.h>

int    odd_or_even(char *str)
{
    int i;
    int j;
    
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

int ft_atoi(char *str)
{ 
    int i;

    i = 0;
    if (odd_or_even(str) == 1)
        write(1, "-", 1);
    while (str[i] >= '0' && str[i] <= '9')
    {
        write(1, &str[i], 1);
        i++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    ft_atoi(argv[1]);
    return argc;
}
