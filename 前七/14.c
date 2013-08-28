#include<stdio.h> 
int world_len(char*sr)
{
char *d;
int s=1,i,count=0;
for(d=sr;*d!='\0';d++)
   switch(s)
   {
   case 0: if(*d==' ')
	     ;
             break;
   case 1: if(*d!=' ')
      {
      count++;
      }
            else
     {     s=0;
	  break;
     }

	  printf("%d",count);

   }

return count;


}
int main()
{
char *s="abc d";
int l;
l=world_len(s);
printf("%d\n",l);
return 0;
}
//#include<stdio.h>
//int world_
