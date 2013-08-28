#include<stdio.h>
#include<windows.h>
int n=1,temp=1;
int map[15][15]={0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,
                 3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,
		 3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,	
		 3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,	
		 3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,
		 3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,
		 3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,
		 3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,
		 3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,
		 3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,
		 3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,
		 3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,	 
		 3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,
		 3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,
		 6,7,7,7,7,7,7,7,7,7,7,7,7,7,8};

		 int win(int p,int q);
		 void yiwei(int n,int *i,int *j);
		 int main()
		 {
		 int i,j,x,y,w1=0,w2=0; 
		 char k;
		 char symbol[11][4]={"┌","┬","┐","├","┼","┤","└","┴","┘","●","◎"}; 
		 if(temp==1)
		 {printf("请用正确的坐标输入形式（如：5,c）\n");
		 printf("           a b c d e f g h i j k l m n o  \n");
		 for(i=0;i<=14;i++)
		 {printf("        %2d",i);
		 for(j=0;j<=14;j++)
		 {
		 printf("%s",symbol[map[i][j]]);
		 }
		 printf("%d\n",i);
		 temp=0;
		  }
		   printf("           a b c d e f g h i j k l m n o  \n");
		   }
		   if(n%2==1) printf("玩家1：");
		     else  printf("玩家2：");
		     loop:scanf("%d,%c",&x,&k);
		     //system("cls");

		     switch(k)
		      {
		        case 'a':y = 0; break;
			  case 'b':y = 1; break;
			    case 'c':y = 2; break;
			      case 'd':y = 3; break;
			        case 'e':y = 4; break;
				  case 'f':y = 5; break;
				    case 'g':y = 6; break;
				      case 'h':y = 7; break;
				        case 'i':y = 8; break;
					  case 'j':y = 9; break;
					    case 'k':y = 10;break;
					      case 'l':y = 11;break;
					        case 'm':y = 12;break;
						  case 'n':y = 13;break;
						    case 'o':y = 14;break;
						      default:{printf("坐标输入错误，请重新输入");goto loop;} 
						       }
						       // system("cls");
						        
							if(n%2==1)
							{  if(map[x][y]==9||map[x][y]==10)
							    {
							             printf("该位置已有棋子，请重新输入"); 
								              goto loop;}
									          else 
										          { 
											                map[x][y]=9;
													              w1=win(x,y);
														                    
																            }    
																	    }
																	    else 
																	    {
																	       if(map[x][y]==9||map[x][y]==10)
																	             {
																		             printf("该位置已有棋子，请重新输入"); 
																			             goto loop;
																				           }
																					      else 
																					             { 
																						                map[x][y]=10;
																								           w2=win(x,y);     
																									           }     
																										   }



																										   printf("           a b c d e f g h i j k l m n o  \n");
																										   for(i=0;i<=14;i++)
																										   {printf("        %2d",i);
																										   for(j=0;j<=14;j++)
																										   {
																										   printf("%s",symbol[map[i][j]]);
																										   }
																										   printf("%d\n",i);
																										   }
																										   printf("           a b c d e f g h i j k l m n o  \n");

																										   if(w1==1)
																										   {    system("cls");
																										        printf("       ----- 玩家1获胜！-----\n");
																											     system("pause"); 
																											          return 0;  
																												  }
																												  if(w2==1)
																												  {    system("cls");
																												       printf("       ----- 玩家2获胜！-----\n");
																												            system("pause"); 
																													         return 0;  
																														 }


																														 n++;
																														 if(n==225)
																														 printf("     ------两位势均力敌！-------");

																														 return main();
																														 }


																														 int win(int p,int q)      /* 判断胜利 p q为判断点坐标，胜利返回1，否则返回0 */
																														 {
																														 int k,n=1,m,P,Q;      /* P Q储存判断点坐标。n为判断方向。m为个数。 */
																														 P=p; Q=q;
																														 k=map[p][q];
																														 while(n!=5){
																														 m=0; 
																														 while(k==map[p][q]){
																														 m++;
																														 if(m==5) return 1; 
																														 yiwei(n,&p,&q); if(p<0||p>14||q<0||q>14) break;
																														 }
																														 n+=4; m-=1; p=P; q=Q;   /* 转向判断 */
																														 while(k==map[p][q]){
																														 m++;
																														 if(m==5) return 1; 
																														 yiwei(n,&p,&q); if(p<0||p>14||q<0||q>14) break;
																														 }
																														 n-=3; p=P; q=Q;         /* 不成功则判断下一组方向 */
																														 }
																														 return 0;
																														 }

																														 void yiwei(int n,int *i,int *j)        /* 在n方向上对坐标 i j 移位 n为1-8方向 从右顺时针开始数 */
																														 {
																														 switch(n){
																														 case 1: *i+=1; break;
																														 case 2: *i+=1; *j+=1; break;
																														 case 3: *j+=1; break;
																														 case 4: *i-=1; *j+=1; break;
																														 case 5: *i-=1; break;
																														 case 6: *i-=1; *j-=1; break;
																														 case 7: *j-=1; break;
																														 case 8: *i+=1; *j-=1; break;
																														 }
																														 }


