/*#include<stdio.h>
struct stu{
char name[10];
short  sex;
int  id;
//char sex;
};
int main(void)
{
printf("%d\n",sizeof(struct stu));
return 0;
}*/
/*#include<stdio.h>
union AA
{
char a;
int ba;
char c[10];

}item;
int main()
{
printf("%d\n0",sizeof(item));
return 0;
}*/

#include<stdio.h>
union AA
{
int a;
short b[2];

};
int main()
{
union AA aa;

aa.a=0x12345678;
printf("%hx\n%hx\n",aa.b[0],aa.b[1]);
return 0;
}
