#include <unistd.h>

void    int_converter(int n, char *str)
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
    str[i] = '\0';
}
void    ft_putnbr(int nb)
{
    int     x;
    char    str[11];
    char        *p;

    p = str;
    x = 0;
    int_converter(nb, p);
    while (str[x])
        x++;
    write(1, str, x);
}

/*int main(void)
{
    ft_putnbr(-2147483647);
    return 0;
}*/
