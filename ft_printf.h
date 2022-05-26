#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int     length(unsigned int nb, unsigned int d);
char    *fill(char *s, unsigned int nb, unsigned int l);
int     ft_putbase(unsigned int n, char *base);
int	ft_putchar(int c);
int     ft_putnbr(int nb);
int     ft_putuns(unsigned int n);
int     ft_putstr(char *s);
int     ft_upnbrbase(unsigned int n);
int     ft_lownbrbase(unsigned int n);
void    check(const char c, va_list arg, int *y);
int     ft_printf(const char *s, ...);
int     hexlength(unsigned long long nb, unsigned long long d);
char    *hexfill(char *s, unsigned long long nb, unsigned long long l);
int     ft_puthex(unsigned long long n, char *base);
int     lowhex(unsigned long long n);
int     ft_hex(unsigned long long n);

#endif
