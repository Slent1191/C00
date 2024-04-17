#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	jopa;

	jopa = 122;
	write(1, &jopa, 1);
	while (jopa > 97)
	{
		jopa = jopa - 1;
		write(1, &jopa, 1);
	}
}
/*int main()
{
        ft_print_reverse_alphabet();

}*/
