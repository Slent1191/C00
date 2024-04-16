#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int main() 
{
	//char first = 'A';
	//char second = 'B';
	//char third = 'C';
	//char quad = '\n';
	ft_putchar('A');
	ft_putchar('B');
	ft_putchar('C');
	ft_putchar('\n');
	//write(1,&first,1);
	//write(1,&second,1);
	//write(1,&third,1);
	//write(1,&quad,1);

	
	return 0;
	


}*/
