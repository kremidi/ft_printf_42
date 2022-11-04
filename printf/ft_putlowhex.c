#include "ft_printf.h"

int ft_putlowhex (long unsigned int nb)
{
	char *hex;
	int n;

	n = 0;
	hex = "0123456789abcdef";
	
	if (nb >= 0 && nb < 16)
	{
		n += ft_putchar(hex[nb]);
	}
	else if (nb >= 16)
	{
		n += ft_putlowhex(nb >> 4); 
		n += ft_putlowhex(nb & 0xf);
	}
	return (n);
}
