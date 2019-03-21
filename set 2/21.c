#include<stdio.h>
int main()
{
int N,A,D;
scanf("%d %d %d",&N,&A,&D);
int nth = A+(N-1)*D;
int sum = (N*(A+nth))/2;
printf("%d",sum);

}
