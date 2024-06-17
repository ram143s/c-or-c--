#include<stdio.h>
int main ()
{
    //   its print the 1 ,3 5,7 9 11 so on
//     int n;
//     printf("Enter a number: ");
//     scanf(" %d", &n);
//    int a=1;
//     for(int i=1;i<=n;i++){
         
//         for(int j=1;j<=i;j++){
            
//           printf("%d",a) ;
//           a=a+2 ;
       
     
//     }
//     printf(" \n");


// its code give  1, 2 3, 4 5 6, 7 8 9 10 and so on 
 int n;
   printf("Enter a number: ");
    scanf(" %d", &n);
   int a=1;
     for(int i=1;i<=n;i++){
         
         for(int j=1;j<=i;j++){
            
           printf("%d",a) ;
           a++ ;
       
     }
     printf(" \n");


}}