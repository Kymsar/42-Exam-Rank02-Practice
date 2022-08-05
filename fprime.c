#include <stdlib.h>
#include <stdio.h>

void fprime(int num)
{
	int i = 1;

	if (num == 1)
		printf("1");
	while (num >= ++i)
	{
		if (num % i == 0)
		{
			printf("%d", i);
			if (num == i)
				break;
			printf("*");
			num /= i;
			i = 1;
		}
	}
}


int main (int ac, char **av)
{
	int num = atoi(av[1]);

	if(ac == 2)
	{	
		fprime(num);
	}
	printf("\n");
}

