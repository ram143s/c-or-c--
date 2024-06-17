#include<stdio.h>
int main ()
{
    int a , b;
    printf("Enter the value of 'a': ");
    scanf("%d", &a);
    printf( "Enter the value of 'b' : ");
    scanf(" %d",&b);
    int power =1;
    for(int i =1;i<=b;i++){
        power=power*a;
    }
    printf("The power is : %d\n",power);
}