#include <unistd.h>

char    int_converter(int n, char *str)
{
    static int  i;

    if (n < 0)
    {
        str[i] = '-';
        i++;
        n = -n;
    }
    if ((n / 10) > 0)
        int_converter(n / 10, str);
    str[i++] = (n % 10) + '0';
}
void    ft_putnbr(int nb)
{
    int     x;
    char    *str;

    x = 0;
    int_converter(nb, str);
    while (str[x])
        x++;
    x++;
    write(1, str, x);
}

/*int main(void)
{
    ft_putnbr(-425);
    return 0;
}*/
