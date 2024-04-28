#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p;
	char	o;

	o = 'N';
	p = 'P';
	if (n >= 0)
		write (1, &p, 1);
	else
		write (1, &o, 1);
}
/* int main()
/
	ft_is_negative(-5);
}*/
