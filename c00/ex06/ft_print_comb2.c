#include <unistd.h>
void ft_putnbr(int n)
{
    char c1 = (n / 10) + '0', c2 = (n % 10) + '0';
    write(1,&c1,1);
    write(1,&c2,1);
}
void ft_print_comb2(void)
{
    int i = 0, j;
    while (i < 100)
    {
        j = i + 1;
        while (j < 100)
        {
            ft_putnbr(i);
            write(1," ",1);
            ft_putnbr(j);
            if (i == 98 && j == 99)
                break;
            write(1,", ",2);
            j++;
        }
        i++;
    }
    
}

/*
int main()
{
    ft_print_comb2();
}
*/