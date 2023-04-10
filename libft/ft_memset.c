#include "libft.h"

void *ft_memset(void *ptr, int value, size_t len)
{
    unsigned char *p;
    unsigned char v;
    int i;

    p = ptr;
    v = value;
    while(len-- > 0)
    {
      *p++ = v;
    }
    return (ptr);
}