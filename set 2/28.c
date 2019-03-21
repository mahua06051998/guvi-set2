#include<stdio.h>
int main()
{
int N;
scanf("%d",&N);
int arr[N];
for(int i=0;i<N;i++)
 scanf("%d",&arr[i]);

for(int i=0;i<N;i++)
 printf("%d %d\n",arr[i],i);

}
