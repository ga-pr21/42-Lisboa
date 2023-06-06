#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# ifndef MAX_FD
#  define MAX_FD 256
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char	  *get_next_line(int fd);
char	  *ft_strjoin(char const *s1, char const *s2);
char	  *ft_strchr(const char *str, int n);
size_t  ft_strlen(const char *str);
char	  *ft_strdup(const char *str);
char    *ft_substr(char const *s, unsigned int start, size_t len);


#endif