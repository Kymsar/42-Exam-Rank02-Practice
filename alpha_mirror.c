#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void alpha_mirror(char *str)
{
	int i = 0;
	char c;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = 'z' - str[i] + 'a';
			ft_putchar(c);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = 'Z' - str[i] + 'A';
			ft_putchar(c);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		alpha_mirror(av[1]);		
	}
	ft_putchar('\n');
	return (0);
}
