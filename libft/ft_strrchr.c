#include "libft.h"

char *ft_strrchr(const char *str, char c)
{
  const char *last = NULL;
  while (*str != '\0')
  {
    if (*str == c)
    {
      last = str;
    }
    str++;
  }
  if (last != NULL)
  {
    return last;
  }
  return NULL;
}