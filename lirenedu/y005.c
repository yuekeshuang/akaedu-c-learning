#include<stdio.h>
void print_str2(char*s)
  {
     char*p=s;
	 for(p=s;*p!=0;p++)
	 {
		putchar(*p);
           
     }


	   putchar(10);
}
                                                   
int main()
{
  char p[128]="hello   liren!";
 print_str2(p);
  return 0;
}

