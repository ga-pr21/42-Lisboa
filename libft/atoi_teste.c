#include "libft.h"

int ft_atoi(char *str)
{
  int i;
  int sig;
  int result;

  i = 0;
  sig = 0;
  while(str[i] == " ")
  {
    i++;
  }

  while (str[i] == "-" || str[i] == "+")
  {
    if (str[i] == "-")
    {
      sig = 1;
    }
    i++;
  }

  while (str[i] >= '0' && str[i] <= '9')
  {
    result = (result * 10) + ()
  }
  
  
}