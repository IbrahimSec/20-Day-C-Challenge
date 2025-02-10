#include <unistd.h>
	void ft_print_alphabet(void)
	{
		char ist = 'a';  
	 		  while(ist <= 'z' ) 
        {
	   	 write(1, &ist ,1); 
	   	 ist++;   
	    }
}
int main()
{
  ft_print_alphabet();
  return 0;
}
