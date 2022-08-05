#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32) || (c == '\0'))
		return (0);
	return (1);
}

void rstr_capitalizer(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')) 
		{
			if (ft_isspace(str[i+1]) == 0)
				ft_putchar(str[i]);
			else
				ft_putchar(str[i] + 32);
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') 
			&& ((ft_isspace(str[i+1]) == 0)))
			ft_putchar(str[i] - 32);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main (int ac, char **av)
{
	int i = 1;

	if (ac <= 1)
		ft_putchar('\n');
	else
	{
		while (i < ac)
		{
			rstr_capitalizer(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
