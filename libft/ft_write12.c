#include <unistd.h>
#include <stdio.h>

char  *ft_write(char *hamburger) {

  int i;

  while (hamburger[i])
  {    
    hamburger[i] += 34;
  }

  return hamburger;
}


int main ()
{
  printf("%s"ft_write("crispy ba"));
}