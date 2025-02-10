#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
	int oir = 'z';
		while ( oir >= 'a' )
	{
		write (1, &oir, 1);
		oir--;
	}
}
int main(void)
{
	ft_print_reverse_alphabet();
}

