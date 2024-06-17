#include<stdio.h>
int  main() {
    
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf(" Enter the value of b:");
    scanf( "%d", &b);
    printf("Enter  the value of c: ");
    scanf("%d",&c);
    if (a>b && a>c){
        printf(" ais greatest");
    }
    if (b>a && b>c){
        printf(" b is greatest");
    }
    if (c>b && a<c){
        printf(" c is greatest");
    }
}