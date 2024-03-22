#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
    return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	if (s == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		++i;
	}
    return (++i);
}