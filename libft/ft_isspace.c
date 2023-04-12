#include "libft.h"

int ft_isspace(int c)
{
  return (c == ' ' || (c >= '\b' && c <= '\r'));
}