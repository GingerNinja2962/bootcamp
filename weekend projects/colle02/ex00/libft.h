#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_list
{
	void	*data;
	struct	s_list *next;
}				t_list;

char	*get_buff(void);

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	print00(int x, int y);
void	print01(int x, int y);
void	print02(int x, int y);
void	print03(int x, int y);
void	print04(int x, int y);
void	boxcheck(char *buff, int x, int y);

int		get_y(char *str);
int		get_x(char *str);
int		rush00check(char *s1, int x, int y);
int		rush01check(char *s1, int x, int y);
int		rush02check(char *s1, int x, int y);
int		rush03check(char *s1, int x, int y);
int		rush04check(char *s1, int x, int y);
int		rushtest(char **ss, int x, char *s1, int y);
int		checkline(char *line, int x, char *s, int len);

#endif
