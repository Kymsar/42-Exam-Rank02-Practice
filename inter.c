#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int ft_check_rep(char *str, char c, int i)
{
	int j = 0;

	while (j < i)
	{
		if (str[j] == c)
			return (0);
		++j;
	}
	return (1);
}

void ft_inter(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while(s1[i])
	{
		if (ft_check_rep(s1, s1[i], i) == 1)
		{
			j = 0;
			while(s2[j])
			{
				if (s1[i] == s2[j])
				{
					ft_putchar(s1[i]);
					break;
				}
				++j;
			}
		}
		i++;
	}

}

int main (int ac, char **av)
{
	if (ac == 3)
	{
		ft_inter(av[1], av[2]);
	}
	ft_putchar('\n');
}
