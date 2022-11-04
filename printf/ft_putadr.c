#include "ft_printf.h"

int ft_putadr(long unsigned int nb)
 {
 	int n;
 	char *hex;

 	n = 0;
 	n += ft_putstr("0x");

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
