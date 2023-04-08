#include "libft.h"
#include <stdio.h>

char *ft_itoa(int n)
{
  char *str;
  int len;
  int sign;
  long num;

  if (n == -2147483648)
  {
    return (strdup("-2147483648"));
  }
  if (n < 0)
  {
    sign = -1;
  }
  else 
  {
    sign = 1;
  }

  num = (long)n * sign;

  len = 1;
  while ( num >= 10)
  {
    num /= 10;
    len++;
  }
  str = (char *)malloc((len + (sign == -1)) * sizeof(char));

  if (str == NULL)
  {
    return (NULL);
  }

  if (sign == -1)
  {
    n = -n;
    str[0] = '-';
  }

  str[len] = '\0';
  while (--len >= 0)
  {
    str[len + (sign == -1)] = n % 10 + '0';
    n /= 10;
  }
  return (str);
}