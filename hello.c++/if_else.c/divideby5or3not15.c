#include<stdio.h>
int main ()
{
    int n;
    printf("Enter a number:");
    scanf( "%d", &n);
    if ( (n % 5 == 0 || n%3==0)&& n%15!=0) {
        printf("divisible by 5or 3 not 15");
    }
    else{
        printf("not divisible by 5 or 3 ");
    }
}