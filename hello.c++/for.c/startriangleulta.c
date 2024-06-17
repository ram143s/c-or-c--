#include<stdio.h>
int main ()
{
 int  n;
 
 printf("Enter the number of coloums: ");
 scanf("%d", &n);
//  for(int i=1;i<=n;i++){
//     for(int j=1;j<=n+1-i;j++){
//         printf("*"); 
//     }
//     printf(" \n");     //to move to next line after each row is printed
//  }

// both are same uper and niche vala
int a=n;
for (int i=1;i<=n; i++){
    for(int j=1;j<=a;j++){
        printf("*");
    }
    a--;
    printf(" \n");   //to move to next line
}


}