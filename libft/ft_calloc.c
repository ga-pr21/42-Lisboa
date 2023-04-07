#include "libft.h"

void  *ft_calloc(size_t n, size_t size)
{
  void* ptr;
  int i;

  i = 0;
  ptr = malloc(n * size);
  if (ptr != NULL)
  {
    while (i < n * size)
    {
      *((char*)ptr + i) = 0;
      i++;
    }
  }
  return ptr;
}
