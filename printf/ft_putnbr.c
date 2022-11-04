#include "ft_printf.h"

int ft_putnbr(int nb)
{
	int n;

	n = 0;
	if (nb == INT_MIN)
		n += ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			n += ft_putchar('-');
			nb *= -1;
		}
		if (nb >= 10)
		{
			n += ft_putnbr(nb / 10);
		}
		n += ft_putchar((nb % 10 + 48));
	}
	return (n);
}
