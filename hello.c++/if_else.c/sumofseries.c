#include<stdio.h>
int main ()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int sum =0 ;
    if (n%2==0){
        sum = -n/2;
         printf("sum is %d\n",sum);
    }
    else {
        sum = -n/2 + n ;
      printf("sum is %d\n",sum);
    }
   
}