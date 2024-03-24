#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		call_specifier(char c, va_list *list);
int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
void	ft_putnbr_helper(int n, int *count);
int		ft_putnbru(unsigned int n);
void	ft_putnbru_helper(unsigned int n, int *count);
int		ft_puthex(unsigned long long p, char spec);
void	ft_puthex_helper(unsigned long long p, char *hex, int *count);

#endif
