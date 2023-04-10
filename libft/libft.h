#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_list
{
  void  *content;
  struct s_list *next;
}        t_list;

int ft_isalpha(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_isdigit(char c);
int ft_isprint(int c);
int ft_isascii(int c);
int ft_isalnum(int c);
char** ft_split(char* str, char* sp, int* quant);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, char c);
int ft_atoi(char *str);
char *ft_itoa(int n);
int ft_strlen(char *str);
void *ft_memset(void *ptr, int value, size_t len);
void ft_bzero(void *ptr, size_t len);
void *ft_memcpy(void *s1, const void *s2, size_t n);
void  *ft_calloc(size_t n, size_t size);

#endif
