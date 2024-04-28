#include <unistd.h>

void	ochko(int a, int b, int c);

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7' || b <= '8' || c <= '9')
	{
		ochko(a, b, c);
		c = c + 1;
		if (c > '9')
		{
			c = b + 1;
			b = b + 1;
		}
		if (b > '8')
		{
			b = a + 1;
			a = a + 1;
		}
	}
}

void	ochko(int a, int b, int c)
{
	int	e;
	int	d;

	e = ',';
	d = ' ';
	if (a != b && b != c && c != a)
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		if (a == '7' && b == '8' && c == '9')
			return ;
		write (1, &e, 1);
		write (1, &d, 1);
	}
}

/*int	main()
{
	ft_print_comb();
}*/
