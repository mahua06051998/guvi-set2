#include<stdio.h>
int main()
{
 int N,temp;
 scanf("%d",&N);
 int arr[N];
 for (int i=0;i<N;i++)
   scanf("%d",&arr[i]);
 for(int i=0;i<N;i++) {
   for(int j=i+1;j<N;j++) {
    if(arr[i] > arr[j]) {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      }
    }
}
int med = N/2;
if(N % 2 == 0) {
 //float ans = ;
 printf("%.1f",(arr[med]+arr[med-1])/2.0);

}
 else
 printf("%d",arr[med]);
 }
