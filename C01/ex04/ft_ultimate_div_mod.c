#include <unistd.h>
#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
int main()
{
	int a = 23;
	int b = 3;
	
	ft_ultimate_div_mod(&a , &b);
	printf("%d a %d b", a ,b);
	return 0;
}
