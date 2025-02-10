#include <unistd.h>
void ft_print_comb2(void)
{
	int a, b;
	a = 0;
	while( a <= 98 )
	{
		b = a + 1;
		while( b <= 99 )
		{

			int c1 = '0'+ (a / 10);
			int c2 = '0'+ (a % 10);
			int c3 = '0'+ (b / 10);
			int c4 = '0'+ (b % 10);

			write(1, &c1, 1);
			write(1, &c2, 1);
			write(1, " ", 2);
			write(1, &c3, 1);
			write(1, &c4, 1);

			if ( a != 98 || b != 99 )
			{	
			write( 1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
int main()
{
	ft_print_comb2();
}
