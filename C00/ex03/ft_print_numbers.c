#include <unistd.h>
	void ft_print_numbers(void)
{
		char nbr = '0';
		while ( nbr <= '9' )
		{
			write(1, &nbr, 1);
			nbr++;
		}
}
int main(void)
{
	ft_print_numbers();
}
