#include <unistd.h>

void write_comb(short n[])
{
	write(1, n, 2);
	if (n[0] == 98 && n[1] == 99)
	{
		write(1, ".\n", 2);
	}
	else 
	{
		write(1, ", ", 2)
	}

}

void	ft_print_comb2(void)
{
	short n[2];

	n[0] = 0;
	while (n[0] <= 98)
	{
		n[1] = n[0] + 1;
		while (n[0] <= 99)
		{
			if (n[0] < n[1]) 
		{
			write_num(n[0]);
			write(1, " ", 1);
			write_num(n[1]);
			if (n[0] == 98 && n[1] == 99) 
			{
				write(1, ".\n",2);
			}
			else 
			{
				write(1, ", ", 2);
			}
		
	}

}

int main() 
{
	
	return 0;

}
