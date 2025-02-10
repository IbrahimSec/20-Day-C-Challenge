#include <unistd.h>
#include <stdio.h>

void ft_swap(int a, int b)
{
    printf("before a= %d b= %d \n", a , b);
	int oir;
    oir = a;
    a = b;
    b = oir;
    printf("after a= %d b= %d \n", a , b);
}

int main()
{
	int a = 12;  
	int b = 34;
	ft_swap(a, b);
	printf("main a= %d b= %d \n", a , b);
        return 0;	
}
