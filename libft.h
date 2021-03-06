/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 14:09:40 by pbeller           #+#    #+#             */
/*   Updated: 2016/11/24 14:09:47 by pbeller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;

typedef struct		s_dpoint
{
	double			x;
	double			y;
}					t_dpoint;

typedef	struct		s_dcomplex
{
	double			r;
	double			i;
}					t_dcomplex;

int					get_next_line(const int fd, char **line);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
int					ft_isalnum(int c);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *str);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *little,\
size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
char				**ft_strsplit(char const *s, char c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_itoa(int n);
char				*ft_strrev(char *str);
void				ft_putstr(const char *str);
void				ft_putchar(char c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memalloc(size_t size);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				ft_strdel(char **as);
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoinfree(char *left, char *right, char free_num);
char				*ft_strnew(size_t size);
char				*ft_strtrim(char const *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(const char *str);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				*ft_memchr(const void *s, int c, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, const void *src, size_t len);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
int					ft_is_white_space(char c);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lst_push_back(t_list **lst, t_list *elem);
int					ft_size_int(int n);
int					ft_is_lowercase(int c);
int					ft_is_uppercase(int c);
int					ft_lstlen(t_list *list);
t_point				*ft_point(int x, int y);
t_dpoint			*ft_dpoint(double x, double y);
t_dcomplex			ft_dcomplex(double r, double i);
int					ft_abs(int x);
char				*ft_strchain(int c, int len);
char				*ft_chrjoinfree(char *s, const char c, int flag);
void				*ft_x_malloc(int size);
char				*ft_litoa(long long nbr);
int					ft_size_long(long long n);
int					ft_free_ret(void *data, int ret);
void				ft_putstr_free(char *str, int f);
void				ft_putstr_clrd(char *str, char *color);
int					ft_putxchar(char c, int x);
void				ft_swap_char(char **chr1, char **chr2);

#endif
