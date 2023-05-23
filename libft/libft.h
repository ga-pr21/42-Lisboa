/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:57:36 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/20 16:47:41 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list		*ft_lstnew(void *content);
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
int			ft_lstsize(t_list *lst);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		*ft_memset(void *ptr, int value, size_t len);
void		ft_bzero(void *ptr, size_t len);
void		*ft_memmove(void *str1, const void *str2, size_t n);
size_t		ft_strlen(const char *str);
void		*ft_memcpy(void *s1, const void *s2, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);
char		*ft_strdup(const char *str);
char		**ft_write(char const *s, char c);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
char		**ft_split(char const *s, char c);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strnstr(const char *str, const char *src, size_t len);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strjoin(char const *s1, char const *s2);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putstr_fd(char *str, int fd);
void		ft_putnbr_fd(int n, int fd);
char		*ft_itoa(int n);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
int			ft_atoi(const char *str);
int			ft_isalpha(int str);
int			ft_isdigit(int str);
int			ft_isalnum(int str);
int			ft_isascii(int str);
int			ft_tolower(int str);
int			ft_isprint(int str);
int			ft_toupper(int str);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *s, int c);
void		*ft_calloc(size_t n, size_t size);
#endif