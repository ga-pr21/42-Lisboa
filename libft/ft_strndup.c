#include "libft.h"

size_t ft_strnlen(const char *str, size_t mlen)
{
  size_t len = 0;

  while (len < mlen && str[len] != '\0')
  {
    len++;
  }
  return len;
}

char *ft_strndup(const char *str, size_t n)
{
  char *dup;
  size_t len = ft_strnlen(str, n);

  dup = malloc(len + 1);
  if (dup == NULL)
  {
    return NULL;
  }

  memcpy(dup, str, len);
  dup[len] = '\0';
  return dup;
}

int main()
{
  char *str = "nome do meio";
  printf("%s\n", ft_strndup(str, 2));

}