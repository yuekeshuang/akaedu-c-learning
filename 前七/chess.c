#include"stdio.h"
void firstchess(int p[][10])   //初始化棋盘；
{
  int i,j;

  for( i=0; i<10; i++)
	for( j=0; j<10; j++)
	  p[i][j] = 0;
  //p[][10] = {0};
  printf("  ");     //what mean?
  for( i=0; i<10; i++) { //fisr line;
	printf(" %d", i);
  }
  printf("\n");

  for( i=0; i<11; i++) //second line;
  printf(" -");
  printf("\n");

  for( i=0; i<10; i++) {
	printf("%d|", i);
	for( j=0; j<10; j++)
	  printf(" %d", p[i][j]);
	printf("\n");
  }
  printf("\n");
  return;
}
void chess(int x, int y, int z, int p[][10])    //棋盘重打印；
{
  int i,j;

  p[x][y] = z;               //参数；

  printf("  ");
  for( i=0; i<10; i++) { //fisr line;
	printf(" %d",i);
  }
  printf("\n");

  for( i=0; i<11; i++) //second line;
  printf(" -");
  printf("\n");

  for( i=0; i<10; i++) {
	printf("%d|",i);
	for( j=0; j<10; j++)
	  printf(" %d", p[i][j]);
	printf("\n");
  }
  printf("\n");
}
void input(int person, int p[][10], int*pa, int*pb)   //用户输入；
{
  while(1) {
	printf("person%d: ", person);
	scanf("%d %d", pa, pb);
	if(*pa>9 || *pb>9 || *pa<0 || *pb<0 || p[*pa][*pb]!=0) {  
	  printf("%d %d is premited! please reput!\n", *pa, *pb);
	  continue;
	}
	else 
	  break;
	printf("\n");
  }

  return;
}
int decide(int a[][10], int *pa, int *pb, int person)//判断；
{
  int i, j, cont = 0;
  for(i=*pa; i<10; i++) {   //lengthways;down;        1
	if(a[i][*pb]==person)
	  cont++;
	else
	  break;
	if(cont==5)
	  return cont;
  }
  cont=0;
  for(i=*pa; i>=0; i--) {   //lengthways;up;           2
	if(a[i][*pb]==person)
	  cont++;
	else
	  break;
	if(cont==5)
	  return cont;
  }
  cont=0;
  for(j=*pb; j>=0; j--) {   //line;left;                3
	if(a[*pa][j]==person)
	  cont++;
	else
	  break;
	if(cont==5)
	  return cont;
  }
  cont=0;
  for(j=*pb; j<10; j++) {   //line;right;               4
	if(a[*pa][j]==person)
	  cont++;
	else
	  break;
	if(cont==5)
	  return cont;
  }

  ///////////////////////////////////斜线！
  cont=0;
  for(j=*pb, i=*pa; i<10&&j<10; i++, j++) {//right\down; 5
	if(a[i][j]==person)
	  cont++;
	else
	  break;
	if(cont==5)
	  return cont;
  }
  cont=0;
  for(j=*pb, i=*pa; i>=0&&j>=0; i--, j--) {   //left\up; 6
	if(a[i][j]==person)
	  cont++;
	else
	  break;
	if(cont==5)
	  return cont;
  }
  cont=0;
  for(j=*pb, i=*pa; i>=0&&j<10; i--, j++) {   //right\up; 7
	if(a[i][j]==person)
	  cont++;
	else
	  break;
	if(cont==5)
	  return cont;
  }
  cont=0;
  for(j=*pb, i=*pa; i<10&&j>=0; i++, j--) {   //right\up; 8
	if(a[i][j]==person)
	  cont++;
	else
	  break;
	if(cont==5)
	  return cont;
  }
  return 0;

}
int main()
{
  int a, b, *pa, *pb, p[10][10], cont = 0;
  pa = &a;
  pb = &b;

  firstchess(p);       // 棋盘初始化；
  while(1) {  
	input(1, p, pa, pb); // 用户1输入;给a、b赋值；
	chess(a, b, 1, p);  // 重新打印；
	cont=decide(p, pa, pb, 1);   // 判断；
	if(cont==5)
	{
	  printf("You Are Win !\n");
	  break;
	}
	input(2, p, pa, pb); // 用户2输入;  
	chess(a, b, 2, p);
	cont = decide(p, pa, pb, 2);   // 判断；
	if(cont==5)
	{
	  printf("You Are Win !\n");
	  break;
	}
  }

  return 0;
}
