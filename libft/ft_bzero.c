#include <unistd.h>

void ft_bzero(void *ptr, size_t len)
{
  unsigned char *p;
  p = ptr;
  while (len-- > 0)
  {
    *p++ = 0;
  }
  return (ptr);
}