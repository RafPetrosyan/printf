#include <stdarg.h>

int ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	list;

	count = 0;
	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			get_specifier()
		}
		else
		{
			write(1, &format[i], 1);
			++i;
		}
	}
}

void	get_specifier(char c, va_list list)
{
	if (c == 'c')
	{
		 
	}
	else if (c == 's')
	{

	}
	else if (c == 'p')
	{

	}
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

}
