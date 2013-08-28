#include<stdio.h>
int main()
{
int a[15][15] = {0};
int i,j;

//for (i = 0; i < 15; i++) 
//	printf("%3d\n", i);
printf("please input chess:\n");
  
  	printf("%2c ",' ');
 for (i = 0; i < 15; i++)

 	printf("%3d", i);
	putchar(10);

 for (i = 0; i < 16; i++)
 	printf("  -");
	putchar(10);
 for (i = 0; i < 15; i++) {
	printf("%2d|", i);
        for (j= 0; j < 15; j++) 
           printf("%3d", a[i][j]);     
        putchar(10);
  
  } 
return 0;

}

void play_chess(int a[][15])
{
  int i, j, s = 1, n;
  int a_flag = 0, b_flag = 0;
  for (i = 0, j = 0; i < 15, j < 15;i++, j++) {
  if (n%2  == 0) {
    printf("player 1:");
    scanf("%d%d\n", &i, &j);
    a[i][j] = 1;
    printf("%d", a[i][j]);
    //a_flag++; 
  }
  if (n%2 == 1) {
  printf("player 2:"); 
  scanf("%d%d\n", &i, &j);
  a[i][j] = 2;
  printf("%d", a[i][j]); 
  //b_flag++;

  }

}   

}
