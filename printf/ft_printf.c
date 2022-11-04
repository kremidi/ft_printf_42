#include "ft_printf.h"
#include<stdio.h>

int	ft_printf(const char* str, ...)
{
	int n;
	va_list format;
	va_start(format,str);

	n = 0;
	while (*str)
	{
		if (*str == '%')
		{	
			str++;
			if (*str == '%')
				n += ft_putchar('%');
			else if (*str == 'c')
				n += ft_putchar(va_arg(format, int));
			else if (*str == 's')
				n += ft_putstr(va_arg(format, char *));
			else if (*str == 'd' || *str == 'i')
				n += ft_putnbr(va_arg(format, int));
			else if (*str == 'u')
				n += ft_putunsigned(va_arg(format, unsigned int));
			else if (*str == 'x')
				n += ft_putlowhex(va_arg(format, long unsigned int));
			else if (*str == 'X')
				n += ft_putuphex(va_arg(format, unsigned int));
			else if (*str == 'p')
				n += ft_putadr(va_arg(format, long unsigned int));
			else
				n += ft_putchar(*str);
		}
		else
			n += ft_putchar(*str);
		str++;
	}
	va_end(format);
	return (n);
}
int main()
{
	int a = 1;
	ft_printf("haha%pfhbdfcb\n",&a);
	printf("haha%pfhbdfcb\n",&a);
}
