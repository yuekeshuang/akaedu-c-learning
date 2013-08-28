#include<stdio.h>
int main(void)
{
  int hour = 23, minute = 59, second = 50;
  int i;
  while(i){
	  second++;
	  if(second == 60){
		  second = 0;
		  minute++;
		  if(minute == 60){
			  minute = 0;
			  second++;
			  if(hour == 24){
				  hour = 0;
				}
			}
		}

	printf("\b\b\b\b\b\b\b\b%02d:%02d:%02d", hour, minute, second);
	sleep(1);
	}
  return 0;
}
