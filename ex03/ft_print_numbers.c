#include <unistd.h>

void	ft_print_numbers(void)
{
	int	a;

	a = 48;
	while (a < 58)
	{
		write(1, &a, 1);
		a = a + 1;
	}
}
/*int main()
	{
		ft_print_numbers();
}*/
