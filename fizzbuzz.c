#include <unistd.h>

void 	ft_putchar(char c)
{
	write (1, &c, 1);
}

int 	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i = 0;
	int j = ft_strlen(str);
	while (i < j)
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_writenum(int i)
{
	char str[10] = "0123456789";

	if (i > 9)
		ft_writenum(i / 10);
	write(1, &str[i % 10], 1);
}

int main (void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			ft_putstr("fizzbuzz");
		else if (i % 3 == 0)
			ft_putstr("fizz");
		else if (i % 5 == 0)
			ft_putstr("buzz");
		else 
			ft_writenum(i);
		i++;
		write (1, "\n", 1);
	
	}
}
