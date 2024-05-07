#include <unistd.h>

void ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;
	char e;
	char f;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	e = ' ';
	f = ',';
	while (a < '9' || b < '8' || c < '9' || d < '9')
	{
		if ((a != c || b != d ) && d != ';')
		{
			write (1, &a, 1);
			write (1, &b, 1);
			write (1, &e, 1);
			write (1, &c, 1);
			write (1, &d, 1);
			write (1, &f, 1);
			write (1, &e, 1);
		}
		d = d + 1;
		if (d > '9')
		{
			d = '0';
			c = c + 1;
		}
		if (c > '9')
		{
			c = a;
			b = b + 1;
			d = b + 1;
			if (b == '9')
			{
				d = '0';
				c = a + 1;
			}
		}
		if (b > '9')
		{
			b = '0';
			a = a + 1;
			//c = a;
			//d = 
		}
			
	}
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &e, 1);
	write (1, &c, 1);
	write (1, &d, 1);
}
int main() 
{
	ft_print_comb2();
}


