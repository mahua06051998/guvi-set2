#include<stdio.h>
int main()
{
int TM;
scanf("%d",&TM);
if(TM > 60)
  printf("%d %d",TM/60,TM%60);
else
printf("%d %d",0,TM);
}
