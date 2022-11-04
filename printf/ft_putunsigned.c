#include "ft_printf.h"

int ft_putunsigned(unsigned int nb)
{
	int n;

	n = 0;
	if (nb >= 10)
	{
		n += ft_putnbr(nb / 10);
	}
	n += ft_putchar(n % 10);
	return (n);
	
}