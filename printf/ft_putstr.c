#include "ft_printf.h"

int ft_putstr(char *str)
{	
	int n;

	n = 0;
	if (!str)
	{
		write(1,"(null)",6);
		return(6);
	}
	while (*str)
	{
		n += ft_putchar(*str);
		str++;
	}
	return(n);
}