
#include<stdio.h>
int main ()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int product =1 ;
    for(int  i=1;i<=n;i++)
    {
        product = product*i;
        printf("The factorial of %d is : %d\n",i,product);
    }
   
}