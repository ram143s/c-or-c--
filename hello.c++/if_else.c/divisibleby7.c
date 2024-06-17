#include<stdio.h>
int main (){
    int n;
    printf(" Enter the Number :");
    scanf("%d",&n);
    if(n%7==0){
        printf("Divisible by 7");
    }
    else{
        printf("Not Divisible by 7" );
    }
}