#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	jopa;

	jopa = 97;
	write(1, &jopa, 1);
	while (jopa < 122)
	{
		jopa = jopa + 1;
		write(1, &jopa, 1);
	}
}
/*nt main()
{
	ft_print_alphabet();

}*/
