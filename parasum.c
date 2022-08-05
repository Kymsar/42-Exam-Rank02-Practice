#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int num)
{	
	char c;

	if (num > 9)
		ft_putnbr(num / 10);
	c = num % 10 + '0';
	ft_putchar(c);
}

int main (int ac, char **av)
{
	(void) ac;
	(void) av;

	if (ac == 1)
		ft_putchar('0');
	else
		ft_putnbr(ac - 1);
	ft_putchar('\n');
	return (0);
}
