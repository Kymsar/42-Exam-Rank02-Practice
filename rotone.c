#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_rotone(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 'z' || str[i] == 'Z')
			ft_putchar(str[i] -25);
		else if (str[i] >= 'a' && str[i] <= 'y')
			ft_putchar(str[i] + 1);
		else if (str[i] >= 'A' && str[i] <= 'Y')
			ft_putchar(str[i] + 1);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		ft_rotone(av[1]);
	}
	write(1, "\n", 1);
}
