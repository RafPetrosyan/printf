#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>


int	get_specifier(char c, va_list *list)
{
	if (c == 'c')
		return (ft_putchar((char)va_arg(*list, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*list, char *)));
	else if (c == 'p')
		re
	else if (c == 'd')
	{

	}
	else if (c == 'i')
	{

	}
	else if (c == 'u')
	{

	}
	else if (c == 'x')
	{

	}
	else if (c == 'X')
	{

	}
	else if (c == '%')
	{

	}
	else if (c != '\0')
	{
		return (ft_putchar(c));
	}
	return (0);
}

int ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	list;

	i = 0;
	count = 0;
	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += get_specifier(format[++i],&list);
			if(format[i] != '\0')
				++i;
		}
		else
			write(1, &format[i++], 1);
	}
	return (count);
}

int main()
{
	ft_printf("%s", "Hello");

	return (0);
}