#include <unistd.h>
#include <stdio.h>
void ft_ft(int *nbr)
{
	*nbr = 67;
}

int main()
{
	int a = 34;
	ft_ft(&a);
	printf("%d", a);
	return 0;

}
