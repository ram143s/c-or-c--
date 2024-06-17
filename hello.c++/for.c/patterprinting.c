#include<stdio.h>
int main ()
{
 int m , n;
 printf("Enter the number of rows:");
 scanf("%d",&m);
 printf("Enter the number of coloums: ");
 scanf("%d", &n);
 for(int i=1;i<=m;i++){
    for(int i=1;i<=n;i++){
        printf("*"); 
    }
    printf(" \n");     //to move to next line after each row is printed
 }
}