#include "libft.h"

char** ft_split(char* str, char* sp, int* quant)
{
  int i = 0;
  int tamanho_string = strlen(str);
  char** substrings = malloc(tamanho_string * sizeof(char*));
  char* substrings_atual = NULL;
  int tamanho_substring_atual = 0;
  *quant = 0;

  while (i <= tamanho_string)
  {
    if (strncmp(str + i, sp, strlen(sp)) == 0 || str[i] == '\0')
    {
      if (tamanho_substring_atual > 0)
      {
        substrings_atual = malloc((tamanho_substring_atual + 1) * sizeof(char));
        strncpy(substrings_atual, str + i - tamanho_substring_atual, tamanho_substring_atual);
        substrings_atual[tamanho_substring_atual] = '\0';
        substrings[(*quant)] = substrings_atual;
        (*quant)++;
        tamanho_substring_atual = 0;
      }
    }
    else
    {
      tamanho_substring_atual++;
    }
    i++;
  }
  return substrings;
}