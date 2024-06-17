#include<stdio.h>
int main ()
{
 int  n;
 
 printf("Enter the number of coloums: ");
 scanf("%d", &n);
 // with help of mathamatics
// for (int i=1;i<=n; i++){
//     for(int j=1;j<=2*n-1;j=j+2){
//         printf("%d ", j);
//     }
    
//     printf(" \n");   //to move to next line
// }


// with the help of variable
 for (int i=1;i<=n; i++){
    int k=1;
    for(int j=1;j<=i;j++){
    printf("%d ", k);
    k=k+2;
    }
    
    printf(" \n");  

}}