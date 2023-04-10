#include "libft.h"

int ft_atoi(char *str)
{
    int i;
    int sig;
    int dest;

    i = 0;
    sig = 0;
    dest = 0;
    while(str[i] == '-')
    {
        sig++;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        dest = dest * 10 + (str[i] - '0');
        i++;
    }
    if(sig % 2 != 0)
    {
        return dest *= -1;
    }
    return dest;
}